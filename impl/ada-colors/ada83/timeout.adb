-- Ada 83: the WAIT of RED lab 4, from the caller's side. Ada 83 added the
-- timed entry call; GREEN 1979 had none ("a task can only be on at most one
-- queue", RAT79 11.4.10), and RED wrote WHEN RECEIVE(m, v) / WHEN DELAY(t).
with TEXT_IO; use TEXT_IO;
procedure TIMEOUT is
   task SERVER is
      entry REPLY (X : out INTEGER);
   end SERVER;

   V : INTEGER;

   task body SERVER is
   begin
      delay 0.3;
      accept REPLY (X : out INTEGER) do
         X := 30;
      end REPLY;
   end SERVER;

begin
   select
      SERVER.REPLY (V);
      PUT_LINE ("message" & INTEGER'IMAGE (V));
   or
      delay 0.5;
      PUT_LINE ("timeout");
   end select;
   select
      SERVER.REPLY (V);
      PUT_LINE ("message again");
   or
      delay 0.1;
      PUT_LINE ("second call timed out: the server has finished");
   end select;
exception
   when TASKING_ERROR =>
      PUT_LINE ("second call: TASKING_ERROR, the server has terminated");
end TIMEOUT;
