% components kept deeply in standard files (A.2, C.14)
CAPSULE main EXPORTS NONE;
   ABBREV entry : RECORD[name : STRING[ASCII](5), marks : ARRAY INT(1 .. 3) OF INT, seen : SET[INT(0 .. 9)],
                         far : SET[INT], u : UNION[n : INT, s : STRING[ASCII](2)]];
   VAR f : FILE[entry]('RANDOM, 'UPDATE);
   VAR g : FILE[STRING[ASCII](4)]('SEQ, 'UPDATE);
   VAR e : entry;
   VAR w : STRING[ASCII](4);
   OPEN(f, "deep.dat", 'NEW);
   WRITE(f, [name : "alpha", marks : [1, 2, 3], seen : [1, 9], far : [-5000000000, 4], u : [s : "hi"]]);
   WRITE(f, [name : "omega", marks : [7, 8, 9], seen : [], far : NOT [0], u : [n : 42]]);
   SET_POSITION(f, 1);
   READ(f, e);
   WRITELN(e.name & " " & CNVT[STRING[ASCII]](e.marks(3)) & " " & e.u.s);
   READ(f, e);
   IF 5 IN e.far AND NOT (0 IN e.far) THEN
      WRITELN(e.name & " " & CNVT[STRING[ASCII]](e.u.n));
   END IF;
   SET_POSITION(f, 1);
   WRITE(f, [name : "gamma", marks : [4, 5, 6], seen : [2], far : [], u : [n : 1]]);
   SET_POSITION(f, 2);
   READ(f, e);
   WRITELN("after replacing the first: " & e.name & ", size " & CNVT[STRING[ASCII]](SIZE(f)));
   CLOSE(f, 'DELETE);
   OPEN(g, "strs.dat", 'NEW);
   WRITE(g, "abcd");
   SET_POSITION(g, 1);
   READ(g, w);
   WRITELN(w);
   CLOSE(g, 'DELETE);
END CAPSULE main;
