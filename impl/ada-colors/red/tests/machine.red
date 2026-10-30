% machine-dependent facilities on the simulated machine (12): configuration
% capsules, representations laid out in the simulated memory, locations
CAPSULE configuration ["PDP11"] EXPORTS ALL;
   CONST machine := "PDP11";
   CONST words := 16;
   CONST milliseconds := 1;
   CONST seconds := 1000;
END CAPSULE configuration;
CAPSULE configuration ["IBM360"] EXPORTS ALL;
   CONST machine := "IBM360";
   CONST words := 32;
END CAPSULE configuration;
CAPSULE main EXPORTS NONE;
   EXPOSE machine, words FROM EXTERNAL configuration ["PDP11"];
   TYPE packet : RECORD[a : INT(0 .. 15), b : BOOL, c : ENUM['x, 'y, 'z], d : ASCII, e : INT(-8 .. 7)]
      REP SIZE(2 * words), ALIGN(words),
         RECORD[a : SIZE(4), b : SIZE(1), c : SIZE(2), d : SIZE(8), OFFSET(8), e : SIZE(4), OFFSET(28)];
   TYPE cell : PTR RECORD[v : INT]
      REP PTR(FREE UNCHECKED);
   VAR p : packet LOCATION (64);
   VAR plain : INT := 258 LOCATION (128);
   VAR byte : INT := 0;
   VAR x, y : cell;
   PROC set(VAR v : INT);
      v := 1;
   END PROC set;
   WRITELN(machine & ", " & CNVT[STRING[ASCII]](words) & "-bit words, " & CNVT[STRING[ASCII]](SECONDS)
           & " ticks a second");
   p.a := 9;
   p.b := TRUE;
   p.c := 'z;
   p.d := 'A;
   p.e := -2;
   FOR i : INT(8 .. 11) REPEAT
      LOW_IO(3, i, byte);
      WRITE(SYS_OUT, CNVT[STRING[ASCII]](byte) & " ");
   END REPEAT;
   WRITELN("");
   LOW_IO(4, 8, 167);
   WRITELN("after LOW_IO wrote byte 8: a = " & CNVT[STRING[ASCII]](p.a) & ", b = " & CNVT[STRING[ASCII]](p.b));
   LOW_IO(3, 16, byte);
   WRITE(SYS_OUT, CNVT[STRING[ASCII]](byte) & " ");
   LOW_IO(3, 17, byte);
   WRITELN(CNVT[STRING[ASCII]](byte) & " are bytes of plain");
   set(plain);
   WRITELN("plain = " & CNVT[STRING[ASCII]](plain));
   ALLOC x PTR;
   y := x;
   FREE(x);
   WRITELN("PTR(FREE UNCHECKED): FREE does not look for other pointers");
   GUARD
      VAR f : FLOAT(16, 0.0 .. 1.0);
   BY
      WHEN X_MAXRANGE => WRITELN("X_MAXRANGE: FLOAT(16, ...)");
   END GUARD;
END CAPSULE main;
