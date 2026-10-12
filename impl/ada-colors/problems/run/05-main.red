
% Users of one dataset, each a task: two readers share it (the limit is two),
% a third is refused, a writer waits for exclusive use until the readers are
% gone, a late reader is refused, and a boss preempts the writer, who learns
% it only when it tries to release what it no longer holds.
CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL database_protection;

   FUNC pad(CONST s : STRING[ASCII]) => dataset_name;
      VAR r : STRING[ASCII](80);
      r(1 .. s.LEN) := s;
      RETURN r;
   END FUNC pad;

   PROC say(CONST who, what : STRING[ASCII]);
      WRITELN("[" & CNVT[STRING[ASCII]](TIME) & " ms] " & who & ": " & what);
   END PROC say;

   TASK reader(CONST who : STRING[ASCII], CONST start, hold : INT);
      DELAY_UNTIL(start);
      GUARD
         shared(pad("payroll"), 'raise_exception, 5);
         say(who, "reading");
         DELAY(hold);
         free_ds(pad("payroll"));
         say(who, "done");
      BY
         WHEN x_too_many_users => say(who, "refused, too many users");
         WHEN x_clusively_used => say(who, "refused, used exclusively");
      END GUARD;
   END TASK reader;

   TASK writer;
      DELAY_UNTIL(3);
      say("writer", "asks for exclusive use and waits");
      exclusive(pad("payroll"), 'wait_availability, 9);
      say("writer", "writing");
      DELAY(2000);
      GUARD
         free_ds(pad("payroll"));
         say("writer", "done");
      BY
         WHEN x_not_using_dataset => say("writer", "x_not_using_dataset: it was preempted and nobody told it");
      END GUARD;
   END TASK writer;

   TASK boss;
      DELAY_UNTIL(3000);
      set_preemption(pad("payroll"), 'exclusive_priority);
      exclusive(pad("payroll"), 1);
      say("boss", "took the dataset over");
      DELAY(500);
      free_ds(pad("payroll"));
      say("boss", "done");
   END TASK boss;

   VAR r1, r2, r3, r4, w, b : ACT;
   add_dataset(pad("payroll"), 2);
   CREATE reader("reader 1", 0, 10) NAMED r1;
   CREATE reader("reader 2", 1, 10) NAMED r2;
   CREATE reader("reader 3", 2, 10) NAMED r3;
   CREATE writer NAMED w;
   CREATE reader("reader 4", 2500, 10) NAMED r4;
   CREATE boss NAMED b;
   DELAY_UNTIL_INACTIVE(w);
   DELAY_UNTIL_INACTIVE(b);
END CAPSULE main;
