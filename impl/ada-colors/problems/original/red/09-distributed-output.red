% RED solution to DoD-1 contract test problem 9: Distributed Parallel Output
% Source: RED Rationale, Intermetrics, Inc., March 1979, Appendix B.2.9
%         (image pb-53example1.jpg). Transcribed from the page image.
%         The link procedures L0..L9 are assumed to exist (not declared).
%
% PURPOSE: An exercise to demonstrate the ability of processing parallel
% events which need not progress at the same rate.
%
% PROBLEM: The program has encountered a multiple-addressee message to be
% output over a number of asynchronous links. Each link is controlled by an
% individual process which performs all link-related processing. Each process
% can accept one packet of the message at a time, and notifies the program
% when the last packet furnished to it has been acknowledged at the distant
% station. When all transmissions are complete, the program shall purge the
% message.
%
% ASSUMPTIONS: The message has five addresses (different for each message)
% and is five packets long; each packet is 80 bytes. At initialization the
% program is given the address of the first buffer, the number of buffers,
% and the identity of the five links (link processes named L0..L9). An 8-bit
% machine. Up to ten addresses. No queuing delay: link processes are dedicated
% and react immediately (e.g. resident in dedicated microprocessors on a bus).
% ---------------------------------------------------------------------------

CAPSULE dist_messages EXPORTS dist_out,user,users,packets;

TYPE user: ENUM['L0,'L1,'L2,'L3,'L4,'L5,'L6,'L7,'L8,'L9];
% This defines the enumeration type for USER.

CONST numusers := 5;
% There are 5 users to whom the message is being sent.

TYPE users: ARRAY INT(1..numusers) OF USER;
% A string of users passed as an argument to dist_out.

VAR m:MAILBOX [ USER ](numusers);

CONST numpackets := 5;
TYPE packet_number: INT (1..numpackets);
TYPE packets: ARRAY PACKET_NUMBER OF STRING[ASCII](80);

VAR gm: PACKETS;
% This is a global variable into which the message is placed, for
% access by all.

GENERIC p: PROC
    PROC dist_out2 [p] IMPORTS gm;
        FOR i: PACKET_NUMBER REPEAT
                p (gm(i));        % send one packet to a link-process
        END REPEAT;
    END PROC dist_out2;

TASK dist_out1 (u:USER) IMPORTS m;
        CASE u
                WHEN 'L0  => dist_out2 [L0];
                WHEN 'L1  => dist_out2 [L1];
                WHEN 'L2  => dist_out2 [L2];
                WHEN 'L3  => dist_out2 [L3];
                WHEN 'L4  => dist_out2 [L4];
                WHEN 'L5  => dist_out2 [L5];
                WHEN 'L6  => dist_out2 [L6];
                WHEN 'L7  => dist_out2 [L7];
                WHEN 'L8  => dist_out2 [L8];
                WHEN 'L9  => dist_out2 [L9];
        END CASE;
    SEND (m, u);
  END TASK dist_out1;

PROC dist_out (us:USERS, READONLY message:PACKETS) IMPORTS gm, m;

     VAR A:ARRAY INT(1..numusers) OF ACT;
     % ACTivation variables hold the task descriptors for
     % the tasks created below.
     VAR msg:USER;

        % Copy message into a global variable, viewable by
        % all processes.
        gm := message;

        % CREATE an instantiation of TASK dist_out1 for each user.
        FOR i:INT(1..numusers) REPEAT
                CREATE dist_out1(us(i)) NAMED a(i);
            END REPEAT;

        % WAIT until all of the instantiations of TASK dist_out1 have
        % terminated.
        for i:INT(1..numusers) REPEAT
                RECEIVE (m,msg);
            END REPEAT;
     END PROC dist_out;

END CAPSULE dist_messages;
