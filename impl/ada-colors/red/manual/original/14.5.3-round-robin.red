% RED Reference Manual, March 1979, section 14.5.3: a round robin scheduler.
% Transcribed from the printed example as it stands, errors included.
% -----
CAPSULE round_robin (time_slice : INT) EXPORTS rr_act,
           task_start, task_end, sync_reset,
           sync_wait, sync_signal;

   CONST max := 256;      % maximum number of activations to
                          %  be scheduled
   TYPE rr_act : INT(1..max);

   VAR n : INT(0..max) := 0;   % index of last q entry in use
   VAR curr : INT(1..max) := 1;  % index of activations
                                 %  currently scheduled
   VAR dlock : DATA_LOCK;
   VAR asched : ACT;           % scheduler activation
   VAR q : ARRAY INT(1..max) OF ACT;  % activations to be
                                      %  be scheduled

   PROC task_start (VAR r : rr_act, VAR a : ACT) IMPORTS ALL;
      REGION dlock;
         ASSERT n < max;
         n := n + 1;
         q(n) := a;
         r.ALL := n;
         SUSPEND (a);
         TASK_START (a,a);
         SYNC_SIGNAL (asched);
      END REGION;
   END PROC task_start;

   PROC task_end (VAR r : rr_act) IMPORTS ALL;
      CONST i := r.ALL;
      VAR victim : act;
      REGION dlock DO
         victim := q(i);
         q(i) := NIL_ACT;
      END REGION;
      LOW_TASK_END (victim);
   END PROC task_end;

   PROC sync_wait (VAR r : rr_act) IMPORTS asched;
      LOW_SYNC_WAIT;
      SYNC_SIGNAL (asched);  % signal that a non-waiting
                             %  activation is available
   END PROC sync_wait;

   PROC sync_reset (VAR r : rr_act);
      LOW_SYNC_RESET;
   END PROC sync_reset;

   PROC sync_signal (VAR r : rr_act)  IMPORTS q;
      LOW_SYNC_SIGNAL (q(r.ALL));
   END PROC sync_signal;

   TASK scheduler IMPORTS ALL;
      WHILE TRUE REPEAT
         REGION dlock DO
            VAR new : INT(1..max+1) := curr;
            % search for next available activation
            loop WHILE TRUE REPEAT
               new := new + 1;
               IF new > n THEN
                  new := new - n;
               END IF;
               IF q(new) /= NIL_ACT AND NOT WAITING (q(new)) THEN
                  EXIT loop;   % found one
               END IF;
               IF new = curr THEN  % all waiting or dead
                  SYNC_RESET;
                  UNLOCK (dlock);      % leave region
                     SYNC_WAIT;        % wait for a new task_
                                       % the end of a sync_w
                  LOCK (dlock);        % reenter region
               END IF;
            END REPEAT loop;
            IF new /= curr THEN
               % schedule next activation
               IF q(curr) /= NIL_ACT THEN
                  SUSPEND (q(curr));
               END IF;
               UNSUSPEND (q(new));
               curr := new;
            END IF;
         END REGION;
         DELAY (time_slice);
      END REPEAT;
   END TASK scheduler;

   q(1) := NIL_ACT;
   SET_PRIORITY (asched, 255);
   CREATE scheduler NAMED asched;

END CAPSULE round_robin;
