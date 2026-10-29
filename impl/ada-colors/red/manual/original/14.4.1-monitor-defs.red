% RED Reference Manual, March 1979, section 14.4.1: the types and operations for monitors.
% Transcribed from the printed example as it stands, errors included.
% -----
CAPSULE monitor_defs EXPORTS monitor_lock, monitor_queue,
                             lock, unlock,
                             delay, continue, :=           ;

   TYPE monitor_lock : PTR RECORD[external, urgent : DATA_LOCK];

   TYPE monitor_queue (lock : monitor_lock) : DATA_LOCK;

   PROC initialize (VAR m : monitor_lock);
      ALLOC m PTR;
      LOCK (m.urgent); % lock the urgent queue so that the next
                       %  activation to lock will wait

   END PROC initialize;

   PROC initialize (VAR mq : monitor_queue);
      LOCK (mq.ALL);      % lock the monitor queue so that the next
                          %  activation to lock will wait

   END PROC initialize;

   PROC lock (VAR m : monitor_lock);
      LOCK (m.external); % lock the main lock
   END PROC lock;

   PROC unlock (VAR m : monitor_lock);
      IF EXCESS_LOCKS (m.urgent) > 1 THEN
         UNLOCK (m.urgent);       % release next activation from
                                  %  the urgent queue
      ELSE
         UNLOCK (m.external);     % unlock the main lock
      END IF;
   END PROC unlock;

   PROC continue (VAR mq : monitor_queue);
      IF EXCESS_LOCKS (mq.ALL) > 1 THEN
         UNLOCK (mq.ALL);           % release the next activation
                                    %  waiting on mq
         LOCK (mq.lock.urgent);     % wait on the urgent queue
      END IF;
   END PROC continue;

   PROC delay (VAR mq : monitor_queue);
      unlock (mq.lock);   % leave the region
      LOCK (mq.ALL);      % wait on the mq queue
   END PROC delay;

END CAPSULE monitor_defs;
