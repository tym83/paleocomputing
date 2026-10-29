% RED Reference Manual, March 1979, section 14.1.2: conditional message passing.
% Transcribed from the printed example as it stands, errors included.
% -----
% Producer-consumer with busy waits.

VAR m : MAILBOX [s] (5);

TASK produce IMPORTS m;
   VAR d : s;
   ...
   BEGIN    % send with busy wait
      VAR b : BOOL := FALSE;
      WHILE NOT b REPEAT
         COND_SEND (m,d,b);
      END REPEAT;
   END;
   ...
END TASK produce;

TASK consume IMPORTS m;
   VAR d : s;
   ...
   BEGIN     % receive with busy wait
      VAR b : BOOL := FALSE;
      WHILE NOT b REPEAT
         COND_RECEIVE (m,d,b);
      END REPEAT;
   END;
   ...
END TASK consume;

VAR pr,cs : ACT;

SET_PRIORITY (pr,10);
SET_PRIORITY (cs,20);
CREATE consumer NAMED cs;
CREATE producer NAMED pr;
