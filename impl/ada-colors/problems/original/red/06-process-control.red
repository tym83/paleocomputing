% RED solution to DoD-1 contract test problem 6: A Process Control Example
% Source: RED Rationale, Intermetrics, Inc., March 1979, Appendix B.2.6
%         (image pb-37example1.jpg). Transcribed from the page image.
%
% PURPOSE: An exercise to test interactions between parallel processing and
% exception handling.
%
% PROBLEM: Assume four processes:
%   process a, which reads data from an input device into a buffer area;
%   process b, which processes the data it finds in the buffer area according
%     to some algorithm and stores them in a 'result area';
%   process c, which produces output as a consequence of these data (either
%     human-oriented, or control output for the controlled process);
%   process d, which monitors and controls these three (and possibly other)
%     processes and interacts with the operator via a keyboard console.
% Processes a and b interact through a 'double buffer': after one area has
% been filled by a, b is notified and starts to read it while a fills the
% second area; when that is full a tries the first area again. b notifies a
% after having read one area. It is illegal to read an area not previously
% filled, or to write an area not completely read (except at initialization).
% It must be possible to replace process a by hardware without changing b, c,
% d, and to terminate a and b at any time without losing data: a cleanup
% operation must process any remaining data in either buffer area.
%
% ASSUMPTIONS: No particular hardware assumptions. Buffers and result area can
% be arrays. Actual I/O and the processing done by b are given library
% routines; process d may be described in highly summarized form.
%
% (The text of process a's description is missing from the HTML transcription
% of the problem; it is reconstructed here from the context.)
% ---------------------------------------------------------------------------

CAPSULE process_control EXPORTS d;

TYPE mes: ENUM['b0, 'b1, 'done];
% The types of messages that are sent between TASKs a and b.
% 'b0 says to use buffer 0, 'b1 buffer 1, and 'done says that
% processing is concluded.

ABBREV mes1: mes('b0..'b1);
% mes1 is the legal buffer designators, a proper subset of the set of
% messages mes.

ABBREV mescontrol: mes('done..'done);

TYPE buffer: STRING[ASCII](80);
% We shall assume, for this example, that the buffers are card images.

TYPE buffers: ARRAY mes1 OF buffer;
% The elements of this array are the buffers.

VAR ma:  MAILBOX [mes1](3);
VAR mb:  MAILBOX [mes](3);
% MAILBOXes for the messages sent between TASKs a and b.
% TASK a can receive only buffers in its ma MAILBOX.
% TASK b can receive either buffers [filled with data input by
% TASK a] or the 'done signal, also passed along by TASK a.
% TASK a stops reading, and puts a request to clean up in b's
% MAILBOX.

VAR mcontrol:  MAILBOX [mescontrol](0);
% This is the control MAILBOX, into which TASK d puts the signal
% that TASK a should terminate cleanly.

VAR mc:  MAILBOX [buffer](3);
% MAILBOX for the "result areas", which are passed from TASK b to
% TASK c.  This MAILBOX is not a part of the original problem per se
% but is added to implement the intent of process c.

% Used for the process that reads from the input device.
ABBREV inputflag: ENUM['ok,'error];

% MAILBOX for input device messages to process a.
VAR mr:  MAILBOX[inputflag](0);

TASK a IMPORTS ma,mb,mr,buffers,mcontrol;
  VAR m: MES;
  VAR f: INPUTFLAG;
    keep_reading WHILE TRUE REPEAT
        WAIT
          WHEN RECEIVE (ma, m)
            =>
               read(buffers(m));  % "read", assumed to already be present,
                                  % actually does the input
               RECEIVE(mr,f);  % wait until input accomplished
               SEND (mb, m);      % tell TASK b that this buffer is full
                                  % ready for input
          WHEN RECEIVE (mcontrol,m)
            =>
               % we have received the signal to quit processing
               SEND(mb, 'done);
               EXIT keep_reading; % and terminate this process.
        END WAIT;
    END REPEAT keep_reading;
  END TASK a;

TASK b IMPORTS ma,mb,mr,buffers;
  VAR m: MES;
  VAR r: BUFFER;
    processing WHILE TRUE REPEAT
         RECEIVE(mb, m);   % blocks until a message is received.

         IF m = 'done THEN EXIT processing; END IF;  % and terminate.

         % Here we are with a buffer to process.
         % We assume that "process" stands for this operation.

         r := process (buffers(m));

         SEND (ma, m);               % send the buffer back to a for further use.
         SEND (mc, r);               % send the information in the "result area
                                     % to process c for output.
    END REPEAT processing;
  END TASK b;

TASK c IMPORTS mc;
  VAR r: BUFFER;
    keep_outputting WHILE TRUE REPEAT
         RECEIVE (mc, r);
         % output the data in r in a "human oriented form"
    END REPEAT keep_outputing;
  END TASK c;

% We are making d be a PROC rather than a TASK under the assumption that
% it is called from within some TASK.

PROC d IMPORTS ma,mb,a,b,c,outstr,inchwl,mcontrol;
  VAR aa, ba, ca: ACT;  % Activation records for the processes
                        % created.
  VAR command: STRING [ASCII](80);

  CREATE c NAMED cc;      % Instantiate c and keep it around

  CREATE a NAMED aa;      % Instantiate a.
  % Send some buffers to a.
  SEND (ma,'b0);
  SEND (ma,'b1);

  CREATE b NAMED bb;      % Instantiate b.


  % This process "interacts with the operator via a keyboard".
  % We shall assume that the user has typed a response that causes us
  % to want to perform various actions.  For example, if the user
  % types the command "DONE", we shall assume that TASKs a and b
  % are to be terminated.

  get_command WHILE TRUE REPEAT
        WRITELN("*");              % prompt for user command.
        READLN (command);
        % ... command processing...
        IF command(1..4) = "DONE" THEN
            SEND (mcontrol, 'done);
        END IF;
        % ... command processing ...
  END REPEAT get_command;
  END PROC d;

END CAPSULE process_control;
