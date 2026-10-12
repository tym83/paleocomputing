% multitasking (chapter 10): mailboxes, WAIT, REGION, priorities, delays
CAPSULE main EXPORTS NONE;
   ABBREV msg : STRING[ASCII](4);
   VAR m : MAILBOX[msg](3);
   VAR m1 : MAILBOX[INT](0);
   VAR done : MAILBOX[INT](10);
   VAR d : DATA_LOCK;
   VAR shared : INT := 0;
   VAR pr, cs, w1, w2, lo, hi : ACT;

   % 10.3: simple producer and consumer
   TASK produce IMPORTS m;
      SEND(m, "MES1");
      SEND(m, "MES2");
      SEND(m, "MES3");
      SEND(m, "STOP");
   END TASK produce;

   TASK consume IMPORTS m, done;
      VAR data : msg;
      WHILE TRUE REPEAT
         RECEIVE(m, data);
         IF data = "STOP" THEN
            SEND(done, 1);
            RETURN;
         END IF;
         WRITELN("consumed " & data);
      END REPEAT;
   END TASK consume;

   % 10.7: two activations add to a shared variable in a region;
   % an exception inside the region still releases the lock
   TASK worker(CONST id : INT, CONST n : INT) IMPORTS d, shared, done;
      FOR i : INT(1 .. n) REPEAT
         GUARD
            REGION d DO
               shared := shared + 1;
               IF i = 3 THEN
                  RAISE X_RANGE;
               END IF;
               DELAY(1);
            END REGION;
         BY
            WHEN X_RANGE => WRITELN("worker " & CNVT[STRING[ASCII]](id) & " recovered in region");
         END GUARD;
      END REPEAT;
      SEND(done, id);
   END TASK worker;

   % 10.2: priorities decide who runs first
   TASK say(CONST s : STRING[ASCII]);
      WRITELN(s);
   END TASK say;

   VAR got : INT;
   CREATE produce NAMED pr;
   CREATE consume NAMED cs;
   RECEIVE(done, got);
   CREATE worker(1, 5) NAMED w1;
   CREATE worker(2, 5) NAMED w2;
   RECEIVE(done, got);
   RECEIVE(done, got);
   WRITELN("shared = " & CNVT[STRING[ASCII]](shared));

   % 10.5: wait on a mailbox or a timeout, whichever comes first
   WAIT
      WHEN RECEIVE(done, got) => WRITELN("unexpected message");
      WHEN DELAY(5 * MILLISECONDS) => WRITELN("timeout after " & CNVT[STRING[ASCII]](TIME) & " ticks");
   END WAIT;

   SET_PRIORITY(ME, 10);
   CREATE say("low priority") NAMED lo;
   SET_PRIORITY(lo, 1);
   CREATE say("high priority") NAMED hi;
   SET_PRIORITY(hi, 200);
   WRITELN("main at priority " & CNVT[STRING[ASCII]](PRIORITY(ME)));
   SET_PRIORITY(ME, 0);
   DELAY_UNTIL_INACTIVE(lo);
   WRITELN("end");
END CAPSULE main;
