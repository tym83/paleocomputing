% RED Reference Manual, March 1979, section 14.3.1: how the MAILBOX type could
% have been defined if it were not built-in.
% Transcribed from the printed example as it stands, errors included.
% -----
CAPSULE mailboxes
   EXPORTS mailbox, send, receive, full_slots, empty_slots, cond_send,
           cond_receive, send_ST, send_REQUEST, send_TEST,
           send_COMPLETE,
           send_REVOKE, receive_ST, receive_REQUEST, receive_TEST,
           receive_COMPLETE, receive_REVOKE                ;

   TYPE send_ST : INT(0..0);         % Note that these are dummys
   TYPE receive_ST : INT(0..0);      % In a more efficient
                                     %  implementation, these
                                     %  would actually be
                                     %  elements linked into
                                     %  the mailbox squeue
                                     %  and rqueue.

GENERIC s : SUBTYPE
   TYPE MAILBOX [s] (len:INT) :
      RECORD[ lock : DATA_LOCK,
              msg  : QUEUE [s],
              squeue : QUEUE [send_ST],
              rqueue : QUEUE [receive_ST]  ];

   % Invariants:
   % (1) If SIZE(m.msg)>0 and SIZE(m.rqueue)>0 then
   %     FIRST(m.rqueue) has been sent a SYNC_SIGNAL
   %     or will call receive_TEST before waiting.
   % (2) If SIZE(m.msg)<m.len and SIZE(m.squeue)>0
   %     then FIRST(m.squeue) has been sent a SYNC_SIGNAL
   %     or will call send_TEST before waiting.

GENERIC t : TYPE
   ABNORMAL FUNC empty_slots (READONLY m : MAILBOX[t] ) => INT;
      RETURN (m.len-SIZE(m.msg)) + SIZE(m.rqueue);
   END FUNC empty_slots;

GENERIC t : TYPE
   ABNORMAL FUNC full_slots (READONLY m : MAILBOX[t] ) => INT;
      RETURN SIZE(m.msg) + SIZE(m.squeue);
   END FUNC full_slots;

GENERIC t : TYPE
   PROC send_REQUEST ( READONLY q : send_ST,
                       VAR m : MAILBOX [t],
                       READONLY v : t          );
      REGION m.lock DO
         INSERT (m.squeue,ME);   % needn't wake up self
      END REGION;
   END PROC send_REQUEST;

GENERIC t : TYPE
   ABNORMAL FUNC send_TEST ( READONLY q : send_ST,
                             READONLY m : MAILBOX [t],
                             READONLY v : t          )
                           => BOOL;
      RETURN FIRST (m.squeue)=ME  AND
              SIZE (m.msg) < m.len       ;
   END FUNC send_TEST;

GENERIC t : TYPE  NEEDS :=(t,t)
   PROC send_COMPLETE ( READONLY q : send_ST,
                        VAR m : MAILBOX [t],
                        READONLY v : t          );
      REGION m.lock DO
         INSERT (m.msg,v);       % may invalidate invariant 1
         IF SIZE(m.msg)=1 AND SIZE(m.rqueue)>0 THEN
            SYNC_SIGNAL (FIRST(m.rqueue));
         END IF;
      END REGION;
   END PROC send_COMPLETE;

GENERIC t : TYPE
   PROC send_REVOKE ( READONLY q : send_ST,
                      VAR m : MAILBOX [t],
                      READONLY v : t          );
      REGION m.lock DO
         DEQUEUE (m.squeue,q);    % may disrupt invariant 2
         IF SIZE(m.squeue)>0 AND SIZE(m.msg)<m.len THEN
            SYNCH_SIGNAL (FIRST(m.squeue));
         END IF;
      END REGION;
   END PROC send_REVOKE;

GENERIC t : TYPE
   PROC receive_REQUEST ( READONLY q : receive_ST,
                          VAR m : MAILBOX [t],
                          READONLY v : t          );
      REGION m.lock DO
         INSERT (m.rqueue,ME);
      END REGION;
   END PROC receive_REQUEST;

GENERIC t : TYPE  NEEDS :=(t,t)
   ABNORMAL FUNC receive_TEST ( READONLY q : receive_ST,
                                READONLY m : MAILBOX [t],
                                READONLY v : t          ) => BOOL;
      RETURN FIRST(m.rqueue)=ME AND 0<SIZE(m.msg);
   END FUNC receive_TEST;

GENERIC t : TYPE  NEEDS :=(t,t)
   PROC receive_COMPLETE ( READONLY q : receive_ST,
                           VAR m : MAILBOX [t],
                           VAR v : t          );
      REGION m.lock DO
         REMOVE (m.msg,v);       % may disrupt invariant 2
         IF SIZE(m.msg)=m.len-1 AND 0<SIZE(m.squeue) THEN
            SYNC_SIGNAL (FIRST(m.squeue));
         END IF;
      END REGION;
   END PROC receive_COMPLETE;

GENERIC t : TYPE  NEEDS :=(t,t)
   PROC receive_REVOKE ( READONLY q : receive_ST,
                         VAR m : MAILBOX [t],
                         READONLY v : t          );
      REGION m.lock DO
         DEQUEUE (m.rqueue,q);   % may disrupt invariant 1
         IF SIZE(m.rqueue)>0 AND SIZE(m.msg)<m.len THEN
            SYNC_SIGNAL (FIRST(m.rqueue));
         END IF;
      END REGION;
   END PROC receive_REVOKE;

GENERIC t : TYPE  NEEDS :=(t,t)
   PROC send ( VAR m : MAILBOX [t],
               READONLY v : t          );
      WAIT
         WHEN send (m,v) =>    % this send is not an invocation
      END WAIT;
   END PROC send;

GENERIC t : TYPE  NEEDS :=(t,t)
   PROC receive ( VAR m : MAILBOX [t],
                  VAR v : t          );
      WAIT
         WHEN receive (m,v) =>   % this receive is not an invocation
      END WAIT;
   END PROC receive;
GENERIC t : TYPE NEEDS := (t,t)
   PROC cond_send ( VAR m : MAILBOX [t],
                    READONLY v : t,
                    VAR b : BOOL         );
      VAR q : send_ST;
      send_REQUEST (q,m,v);
      IF send_TEST (q,m.v) THEN
         send_COMPLETE (q,m,v);
         b := TRUE;
      ELSE
         b := FALSE;
      END IF;
      send_REVOKE (q,m,v);
   END PROC cond_send;

GENERIC t : TYPE NEEDS ::= (t,t)
   PROC cond_receive ( VAR m : MAILBOX [t],
                       VAR v : t,
                       VAR b : BOOL         );
      VAR q : receive_ST;
      receive_REQUEST (q,m,v);
      IF receive_TEST (q,m.v) THEN
         receive_COMPLETE (q,m,v);
         b := TRUE;
      ELSE
         b := FALSE;
      END IF;
      receive_REVOKE (q,m,v);
   END PROC cond_receive;
END CAPSULE mailboxes;
