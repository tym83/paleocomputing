
% A producer writes a three-block file and overruns its estimate; a reader
% comes too early, two come after the end of writing and read in parallel,
% the file cannot be destroyed while it is read, and then it can.
CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL directory;

   FUNC name(CONST s : STRING[ASCII]) => STRING[ASCII];
      % a string has no value until it is given one (RM 5.1): blanks first
      VAR r : STRING[ASCII](10) := "          ";
      r(1 .. s.LEN) := s;
      RETURN r;
   END FUNC name;

   PROC say(CONST who, what : STRING[ASCII]);
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] " & who & ": " & what);
   END PROC say;

   TASK producer;
      VAR b : STRING[ASCII](80*100);
      FOR i : INT(1 .. b.LEN) REPEAT
         b(i) := 'SP;
      END REPEAT;
      createfile(name("log"), 3);
      say("producer", "created log");
      FOR i : INT(1 .. 4) REPEAT
         b(1 .. 7) := "record " ;
         b(8 .. 8) := CNVT[STRING[ASCII]](i);
         GUARD
            write(name("log"), b);
            say("producer", "wrote block " & CNVT[STRING[ASCII]](i));
         BY
            WHEN x_write_size_exceeded => say("producer", "block 4: x_write_size_exceeded");
         END GUARD;
      END REPEAT;
      endwrite(name("log"));
      say("producer", "endwrite");
   END TASK producer;

   TASK reader(CONST who : STRING[ASCII], CONST start, blk : INT);
      VAR b : STRING[ASCII](80*100);
      DELAY_UNTIL(start);
      GUARD
         read(name("log"), blk, b);
         say(who, "block " & CNVT[STRING[ASCII]](blk) & " says " & b(1 .. 8));
      BY
         WHEN x_read_beingwritten => say(who, "x_read_beingwritten");
         WHEN x_read_illegal_block => say(who, "x_read_illegal_block");
         WHEN x_noexists => say(who, "x_noexists");
      END GUARD;
   END TASK reader;

   TASK janitor;
      DELAY_UNTIL(24);
      GUARD
         createfile(name("log"), 1);
      BY
         WHEN x_create_exists => say("janitor", "create log again: x_create_exists");
      END GUARD;
      GUARD
         destroy(name("log"));
      BY
         WHEN x_destroy_fileused => say("janitor", "destroy while read: x_destroy_fileused");
      END GUARD;
      DELAY_UNTIL(40);
      destroy(name("log"));
      say("janitor", "destroyed log");
      GUARD
         destroy(name("log"));
      BY
         WHEN X_NIL => say("janitor", "destroy a missing file: X_NIL, the package has no answer");
      END GUARD;
   END TASK janitor;

   VAR p, r1, r2, r3, r4, j : ACT;
   CREATE producer NAMED p;
   CREATE reader("reader 1", 7, 0) NAMED r1;
   CREATE reader("reader 2", 21, 2) NAMED r2;
   CREATE reader("reader 3", 21, 1) NAMED r3;
   CREATE janitor NAMED j;
   CREATE reader("reader 4", 45, 0) NAMED r4;
   DELAY_UNTIL_INACTIVE(r4);
   DELAY_UNTIL_INACTIVE(j);
END CAPSULE main;
