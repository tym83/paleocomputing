-- What a rendezvous costs, against a procedure call and the life of a task.
--
-- Ada 83, so the same text compiles in the Rational Environment on the R1000
-- and with GNAT -gnat83. Each test is first calibrated by the clock, then run
-- N times between two lines, "BEGIN <test> <N>" and "END <test> <ms>". On the
-- R1000 emulator the script driving the console reads the machine's own
-- microcycle counter at both lines; the Calendar figure is only a cross-check,
-- because the emulator's clock runs at the speed of the host.
package Rdv_Bench is
    Target_Seconds : Float := 20.0;
    procedure Run;
end Rdv_Bench;

with Text_Io;
with Calendar;
package body Rdv_Bench is

    use Calendar;

    type Test is (Empty_Loop, Call, Rendezvous, Rendezvous_Param, Task_Life);

    Counter : Integer := 0;

    procedure Bump (X : in out Integer) is
    begin
        X := X + 1;
    end Bump;

    -- accepts N calls of PING and ends
    task type Pinger is
        entry Start (N : in Integer);
        entry Ping;
    end Pinger;

    task body Pinger is
        Count : Integer;
    begin
        accept Start (N : in Integer) do
            Count := N;
        end Start;
        for I in 1 .. Count loop
            accept Ping;
        end loop;
    end Pinger;

    -- accepts N calls of PASS, each with a parameter changed in the rendezvous
    task type Passer is
        entry Start (N : in Integer);
        entry Pass (X : in out Integer);
    end Passer;

    task body Passer is
        Count : Integer;
    begin
        accept Start (N : in Integer) do
            Count := N;
        end Start;
        for I in 1 .. Count loop
            accept Pass (X : in out Integer) do
                X := X + 1;
            end Pass;
        end loop;
    end Passer;

    task type Short;

    task body Short is
    begin
        null;
    end Short;

    procedure Do_Test (T : Test; N : Integer) is
    begin
        case T is
            when Empty_Loop =>
                for I in 1 .. N loop
                    Counter := Counter + 1;
                end loop;
            when Call =>
                for I in 1 .. N loop
                    Bump (Counter);
                end loop;
            when Rendezvous =>
                declare
                    S : Pinger;
                begin
                    S.Start (N);
                    for I in 1 .. N loop
                        S.Ping;
                    end loop;
                end;
            when Rendezvous_Param =>
                declare
                    S : Passer;
                begin
                    S.Start (N);
                    for I in 1 .. N loop
                        S.Pass (Counter);
                    end loop;
                end;
            when Task_Life =>
                -- the block is left only when the task has terminated
                for I in 1 .. N loop
                    declare
                        S : Short;
                    begin
                        null;
                    end;
                end loop;
        end case;
    end Do_Test;

    function Seconds_For (T : Test; N : Integer) return Duration is
        Start : constant Time := Clock;
    begin
        Do_Test (T, N);
        return Clock - Start;
    end Seconds_For;

    procedure Measure (T : Test) is
        N : Integer := 10;
        D : Duration;
        F : Float;
    begin
        loop
            D := Seconds_For (T, N);
            exit when D >= 2.0 or N >= 2_000_000;
            N := N * 4;
        end loop;
        F := Float (N) * Target_Seconds / Float (D);
        if F > 20_000_000.0 then
            F := 20_000_000.0;
        end if;
        N := Integer (F);
        Text_Io.Put_Line ("BEGIN " & Test'Image (T) & Integer'Image (N));
        D := Seconds_For (T, N);
        Text_Io.Put_Line ("END " & Test'Image (T) &
                          Integer'Image (Integer (Float (D) * 1000.0)) & " ms");
    end Measure;

    procedure Run is
    begin
        for T in Test loop
            Measure (T);
        end loop;
        Text_Io.Put_Line ("BENCH DONE" & Integer'Image (Counter));
    end Run;

end Rdv_Bench;
