% RED Reference Manual, March 1979, section 14.1.3: assignment and equality of mailboxes.
% Transcribed from the printed example as it stands, errors included.
% -----
% message passing with replys.

ABBREV sm : ... ; % message subtype
ABBREV sr : ... ; % reply subtype
ABBREV packet : RECORD[ data  : sm,
                        reply : MAILBOX [sr] (0) ];

VAR m : MAILBOX [packet] (10);

TASK sender (id : INT) IMPORTS m;
   VAR vm : sm; % message variable
   VAR vr : sr; % reply variable
   VAR r : MAILBOX [sr] (1);

   WHILE TRUE REPEAT
      ... % compute vm
      SEND (m, [data:vm, reply:r]); % send message
      RECEIVE (r,vr);               % get reply
      ... % use vr
   END REPEAT;

END TASK sender;

TASK receiver IMPORTS m;
   VAR p : packet;
   VAR vr : sr;    % reply variable
   WHILE TRUE REPEAT
      RECEIVE (m,p); % get message
      ... % process the message(p.data) and compute the reply(vr)
      SEND (p.reply,vr);   % send the reply
   END REPEAT;

END task receiver;

VAR sa : ARRAY INT(1..10) OF ACT;
VAR ra : ACT;

CREATE receiver NAMED ra;
FOR i : INT(1..10) REPEAT
   CREATE sender(i) NAMED sa(i);
END REPEAT;
