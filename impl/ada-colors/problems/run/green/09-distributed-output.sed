# changes that make GREEN contract problem 9 (1979) run
# transmitting a packet over the link is a comment in the original
s/^            -- transmit packet over the link/               PUT("link" \& INTEGER'REP(INTEGER(LINK_CONTROLLER'INDEX)) \& " sends packet" \& INTEGER'REP(PKT)); PUT(NEWLINE);/
# the package body prints, so it names TEXT_IO in its visibility list
s/^package body MESSAGE_TRANSMISSION is/restricted(TEXT_IO) package body MESSAGE_TRANSMISSION is\
   use TEXT_IO;/
# MESSAGE initiates the packetizers inside the body of accept SEND, which RM79 9.5
# forbids ("an accept body cannot initiate a task"): the parameters are saved
# and the packetizers started after the rendezvous
s/^                        := (MSG_ID'FIRST .. MSG_ID'LAST => 0);/&\
      M : MSG_ID;\
      D : DEST_SET;/
s/^               for I in 1 .. MSG_SIZE loop$/               M := MSG; D := TO;\
            end SEND;\
            for I in 1 .. MSG_SIZE loop/
s/initiate PACKETIZER((MSG-1)\*MSG_SIZE + I);/initiate PACKETIZER((M-1)*MSG_SIZE + I);/
s/PACKETIZER((MSG-1)\*MSG_SIZE + I).SEND(MSG, TO(I));/PACKETIZER((M-1)*MSG_SIZE + I).SEND(M, D(I));/
/^               end loop;$/{
s/^   //
n
d
}
# the acknowledgement comes from the line hardware, which is not simulated: the
# package gets a procedure that plays the line, and one that stops the tasks
s/^end;$/   procedure LINE_ACK (L : LINK; MSG : MSG_ID);\
   procedure SHUTDOWN;\
end;/
s/^begin  -- body of MESSAGE_TRANSMISSION/   procedure LINE_ACK (L : LINK; MSG : MSG_ID) is\
   begin\
      LINK_CONTROLLER(L).ACK(MSG);\
   end;\
\
   procedure SHUTDOWN is\
   begin\
      abort MESSAGE, LINK_CONTROLLER(LINK'FIRST .. LINK'LAST);\
   end;\
\
&/
