# Changes that make the mailbox definition of 14.3.1 translate.
# send_REVOKE signals with SYNCH_SIGNAL; the operation is SYNC_SIGNAL (14.3.2)
s/SYNCH_SIGNAL (FIRST(m.squeue));/SYNC_SIGNAL (FIRST(m.squeue));/
# the waiting queues hold activations, ME is inserted and FIRST is compared
# with ME, so they are QUEUE [ACT], not queues of the dummy request types;
# and a revoke takes its own activation out, not the dummy request q
s/squeue : QUEUE \[send_ST\],/squeue : QUEUE [ACT],/
s/rqueue : QUEUE \[receive_ST\]  \];/rqueue : QUEUE [ACT]  ];/
s/DEQUEUE (m.squeue,q);/DEQUEUE (m.squeue,ME);/
s/DEQUEUE (m.rqueue,q);/DEQUEUE (m.rqueue,ME);/
# m.v for m,v in the tests of cond_send and cond_receive
s/IF send_TEST (q,m\.v) THEN/IF send_TEST (q,m,v) THEN/
s/IF receive_TEST (q,m\.v) THEN/IF receive_TEST (q,m,v) THEN/
# ::= for := in cond_receive's NEEDS
s/NEEDS ::= (t,t)/NEEDS := (t,t)/
# the QUEUE[a] the example assumes comes from the queues capsule
s/^           receive_COMPLETE, receive_REVOKE                ;$/&\
   EXPOSE ALL FROM EXTERNAL queues;/
