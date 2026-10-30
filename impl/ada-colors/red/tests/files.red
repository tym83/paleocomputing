% files (App. A, C.14) and conversions (A.3)
CAPSULE main EXPORTS NONE;
   ABBREV pair : RECORD[a : INT, b : FLOAT];
   VAR f : FILE[pair]('RANDOM, 'UPDATE);
   VAR t : FILE[ASCII]('SEQ, 'OUTPUT);
   VAR r : FILE[ASCII]('SEQ, 'INPUT);
   VAR p : pair;
   VAR line : STRING[ASCII](5);
   VAR ch : ASCII;
   VAR e : ENUM['red, 'green] := 'green;
   OPEN(f, "files-test.dat", 'NEW);
   WRITE(f, [a : 1, b : 1.5]);
   WRITE(f, [a : 2, b : 2.5]);
   WRITE(f, [a : 3, b : 3.5]);
   SET_POSITION(f, 2);
   READ(f, p);
   WRITELN("random file: size " & CNVT[STRING[ASCII]](SIZE(f)) & ", read " & CNVT[STRING[ASCII]](p.a)
           & " " & CNVT[STRING[ASCII]](p.b) & ", now at " & CNVT[STRING[ASCII]](POSITION(f)));
   GUARD
      SET_POSITION(f, 9);
   BY
      WHEN X_FILEPOS => WRITELN("X_FILEPOS");
   END GUARD;
   SET_POSITION(f, 4);
   GUARD
      READ(f, p);
   BY
      WHEN X_EOF => WRITELN("X_EOF: READ at the end");
   END GUARD;
   IF EOF(f) THEN
      WRITELN("EOF(f)");
   END IF;
   CLOSE(f, 'DELETE);
   GUARD
      WRITELN(CNVT[STRING[ASCII]](SIZE(f)));
   BY
      WHEN X_FILE => WRITELN("X_FILE: the file is closed");
   END GUARD;
   GUARD
      OPEN(f, "files-test.dat", 'OLD);
   BY
      WHEN X_NOFILE => WRITELN("X_NOFILE: deleted");
   END GUARD;
   GUARD
      OPEN(f, "../x", 'NEW);
   BY
      WHEN X_FILENAME => WRITELN("X_FILENAME");
   END GUARD;
   OPEN(t, "files-text.txt", 'NEW);
   WRITELN(t, "hello");
   WRITELN(t, "world");
   WRITE(t, 'X);
   CLOSE(t, 'SAVE);
   FILE_RENAME("files-text.txt", "files-moved.txt");
   OPEN(r, "files-moved.txt", 'OLD);
   GUARD
      WRITELN(r, "no");
   BY
      WHEN X_FILE => WRITELN("X_FILE: an input file is not written");
   END GUARD;
   WRITELN("SIZELN " & CNVT[STRING[ASCII]](SIZELN(r)));
   READLN(r, line);
   WRITELN("READLN " & line);
   READLN(r, line);
   READ(r, ch);
   WRITELN("then " & line & " and " & chs(ch));
   GUARD
      READLN(r, line);
   BY
      WHEN X_EOF => WRITELN("X_EOF: READLN at the end");
   END GUARD;
   CLOSE(r, 'DELETE);
   WRITELN(SYS_OUT, "SYS_OUT is the teletype");
   WRITELN(CNVT[STRING[ASCII]](372.65) & " " & CNVT[STRING[ASCII]](-50.0) & " " & CNVT[STRING[ASCII]](e) & " ["
           & CNVT[STRING[ASCII](6)](42) & "]");
   IF CNVT[BOOL](" TRUE ") AND CNVT[FLOAT(6, -10.0 .. 10.0)](" -2.5 ") = -2.5 AND CNVT[INT](" -12 ") = -12
         AND CNVT[ENUM['red, 'green]]("red") = 'red THEN
      WRITELN("conversions from strings");
   END IF;
   GUARD
      e := CNVT[ENUM['red, 'green]]("blue");
   BY
      WHEN X_RANGE => WRITELN("X_RANGE: not a literal");
   END GUARD;
   WRITELN(FORMAT(372.65, 3, 3) & " " & FORMAT(-50.0, 3, 3) & " " & FORMAT(0.0000000001, 3, 3));
   GUARD
      WRITELN(FORMAT(10050.0, 3, 3));
   BY
      WHEN X_FORMAT => WRITELN("X_FORMAT");
   END GUARD;
   WRITELN(FORMAT(372.65, 3, 3, 3) & " " & FORMAT(-50.0, 3, 3, 3) & " " & FORMAT(10050.0, 3, 3, 3) & " "
           & FORMAT(0.0000000001, 3, 3, 3));
   GUARD
      WRITELN(FORMAT(1.0E100, 3, 3, 1));
   BY
      WHEN X_FORMAT => WRITELN("X_FORMAT: the exponent does not fit");
   END GUARD;
   FUNC chs(c : ASCII) => STRING[ASCII];
      VAR s : STRING[ASCII](1);
      s(1) := c;
      RETURN s;
   END FUNC chs;
END CAPSULE main;
