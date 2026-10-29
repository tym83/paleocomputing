% RED Reference Manual, March 1979, section 14.1.1: available counts, pulsed events.
% Transcribed from the printed example as it stands, errors included.
% -----
CAPSULE event_cap EXPORTS pevent,await,signal;
% This capsule defines pulsed events.  When a pulsed
% event is signaled, all awaiting activations continue.

   TYPE pevent : RECORD[ lock : DATA_LOCK,
                         queue : MAILBOX [INT(0..0)] (0) ];

   PROC signal (VAR e : pevent);
      REGION e.lock DO
         WHILE EMPTY_SLOTS (e.queue) > 0 REPEAT
            SEND (e.queue,0);
         END REPEAT;
      END REGION;
   END PROC signal;

   PROC await (VAR e : pevent);
      VAR t : INT(0..0);
      REGION e.lock DO     % this ensures that awaits arriving
      END REGION;          %  after a signal will not continue
      RECEIVE (e.queue,t);
   END PROC await;

END CAPSULE event_cap;
