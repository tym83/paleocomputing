-- Ada 83: the REGION of RED lab 5. Ada 83 has no lock statement; a lock is a
-- task with SEIZE and RELEASE entries, and nothing releases it when the body
-- between them raises an exception. The handler has to do it by hand. RED's
-- REGION d DO ... END REGION releases d however the body ends (RM 10.7);
-- Ada 95 protected objects finally made that automatic.
with TEXT_IO; use TEXT_IO;
procedure REGION is
   task LOCK is
      entry SEIZE;
      entry RELEASE;
   end LOCK;

   COUNT : INTEGER := 0;
   pragma SHARED (COUNT);

   task type WORKER is
      entry START (N : in INTEGER);
   end WORKER;

   task body LOCK is
   begin
      loop
         select
            accept SEIZE;
            accept RELEASE;
         or
            terminate;
         end select;
      end loop;
   end LOCK;

   task body WORKER is
      ID : INTEGER;
   begin
      accept START (N : in INTEGER) do
         ID := N;
      end START;
      for I in 1 .. 4 loop
         LOCK.SEIZE;
         begin
            COUNT := COUNT + 1;
            if I = 2 then
               raise CONSTRAINT_ERROR;
            end if;
            LOCK.RELEASE;
         exception
            when CONSTRAINT_ERROR =>
               LOCK.RELEASE;   -- forget this line and the next SEIZE waits forever
         end;
      end loop;
   end WORKER;

begin
   declare
      A, B : WORKER;
   begin
      A.START (1);
      B.START (2);
   end;
   PUT_LINE ("count" & INTEGER'IMAGE (COUNT));
end REGION;
