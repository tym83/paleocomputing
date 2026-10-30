% operations of the built-in types (App. C)
CAPSULE main EXPORTS NONE;
   VAR x : FLOAT := 1.0E300;
   VAR i : INT := FLOOR(2.5);
   VAR j : INT := FLOOR(-2.5);
   VAR d : DATA_LOCK;
   VAR m : MAILBOX[INT](1);
   VAR qs : SEND_ST;
   VAR qr : RECEIVE_ST;
   VAR v : INT := 0;
   WRITELN("FLOOR: " & CNVT[STRING[ASCII]](i) & " " & CNVT[STRING[ASCII]](j));
   GUARD
      x := x * 1.0E300;
   BY
      WHEN X_OVERFLOW => WRITELN("X_OVERFLOW: FLOAT");
   END GUARD;
   GUARD
      x := 2.0 ** -1;
   BY
      WHEN X_NEG_EXP => WRITELN("X_NEG_EXP: FLOAT ** -1");
   END GUARD;
   WRITELN("ACTP, RADIX, EMIN, EMAX: " & CNVT[STRING[ASCII]](ACTP(x)) & " " & CNVT[STRING[ASCII]](RADIX(x)) & " "
           & CNVT[STRING[ASCII]](EMIN(x)) & " " & CNVT[STRING[ASCII]](EMAX(x)));
   GUARD
      UNLOCK(d);
   BY
      WHEN X_LOCK => WRITELN("X_LOCK: UNLOCK of an unlocked data lock");
   END GUARD;
   GUARD
      IF OWNER(d) = ME THEN
         WRITELN("no");
      END IF;
   BY
      WHEN X_LOCK => WRITELN("X_LOCK: OWNER of an unlocked data lock");
   END GUARD;
   LOCK(d);
   IF OWNER(d) = ME THEN
      WRITELN("OWNER of a locked data lock");
   END IF;
   UNLOCK(d);
   SEND_REQUEST(qs, m, 5);
   IF SEND_TEST(qs, m, 5) THEN
      SEND_COMPLETE(qs, m, 5);
   END IF;
   SEND_REVOKE(qs, m, 5);
   RECEIVE_REQUEST(qr, m, v);
   IF RECEIVE_TEST(qr, m, v) THEN
      RECEIVE_COMPLETE(qr, m, v);
   END IF;
   RECEIVE_REVOKE(qr, m, v);
   WRITELN("low-level mailbox operations: " & CNVT[STRING[ASCII]](v));
END CAPSULE main;
