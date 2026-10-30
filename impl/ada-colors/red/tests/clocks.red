% activation clocks (10.4) and X_UNHANDLED (9, 9.3); computation takes no
% time on the simulated machine, so an activation's clock runs while it is
% running or delayed, not while it waits for another activation
CAPSULE main EXPORTS NONE;
   TASK sleeper;
      DELAY(10);
      DELAY(10);
   END TASK sleeper;
   TASK waiter;
      VAR m : MAILBOX[INT](1);
      VAR v : INT;
      WAIT
         WHEN RECEIVE(m, v) => WRITELN("no");
         WHEN DELAY(30) => WRITELN("waiter: nothing came");
      END WAIT;
   END TASK waiter;
   PROC p;
      EXCEPTION local;
      RAISE local;
   END PROC p;
   VAR a, b : ACT;
   CREATE sleeper NAMED a;
   CREATE waiter NAMED b;
   DELAY_UNTIL(5, a);
   WRITELN("main at " & CNVT[STRING[ASCII]](TIME) & ": the sleeper clock " & CNVT[STRING[ASCII]](TIME(a)));
   WAIT
      WHEN DELAY_UNTIL(a, 15) => WRITELN("main at " & CNVT[STRING[ASCII]](TIME) & ": WAIT on the sleeper clock");
   END WAIT;
   DELAY_UNTIL_INACTIVE(a);
   DELAY_UNTIL_INACTIVE(b);
   WRITELN("sleeper ran " & CNVT[STRING[ASCII]](TIME(a)) & ", waiter " & CNVT[STRING[ASCII]](TIME(b))
           & ", main " & CNVT[STRING[ASCII]](TIME(ME)));
   GUARD
      p;
   BY
      WHEN X_UNHANDLED => WRITELN("X_UNHANDLED: local left the procedure that defines it");
   END GUARD;
   GUARD
      BEGIN
         EXCEPTION inner;
         RAISE inner;
      END;
   BY
      WHEN X_UNHANDLED => WRITELN("X_UNHANDLED: inner left its block");
   END GUARD;
END CAPSULE main;
