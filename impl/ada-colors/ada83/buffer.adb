-- Ada 83: the bounded buffer of RED lab 3. RED writes VAR m : MAILBOX[INT](3);
-- Ada 83 has no mailbox, so the buffer is a server task that accepts
-- PUT only while there is room and GET only while there is something to take.
with TEXT_IO; use TEXT_IO;
procedure BUFFER is
   task MAILBOX is
      entry PUT (X : in INTEGER);
      entry GET (X : out INTEGER);
   end MAILBOX;

   task PRODUCER;
   V : INTEGER;

   task body MAILBOX is
      SIZE  : constant := 3;
      ITEMS : array (1 .. SIZE) of INTEGER;
      HEAD, COUNT : INTEGER := 0;
   begin
      loop
         select
            when COUNT < SIZE =>
               accept PUT (X : in INTEGER) do
                  ITEMS ((HEAD + COUNT) mod SIZE + 1) := X;
               end PUT;
               COUNT := COUNT + 1;
         or
            when COUNT > 0 =>
               accept GET (X : out INTEGER) do
                  X := ITEMS (HEAD + 1);
               end GET;
               HEAD := (HEAD + 1) mod SIZE;
               COUNT := COUNT - 1;
         or
            terminate;
         end select;
      end loop;
   end MAILBOX;

   task body PRODUCER is
   begin
      for I in 1 .. 5 loop
         MAILBOX.PUT (I);
      end loop;
   end PRODUCER;

begin
   for I in 1 .. 5 loop
      MAILBOX.GET (V);
      PUT_LINE ("got" & INTEGER'IMAGE (V));
   end loop;
end BUFFER;
