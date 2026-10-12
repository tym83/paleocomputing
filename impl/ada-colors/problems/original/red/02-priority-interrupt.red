% RED solution to DoD-1 contract test problem 2: Priority Interrupt System
% Source: RED Rationale, Intermetrics, March 1979, Appendix B.2.2
%         (image pb-10example1.jpg, iment.com transcription)
%
% PURPOSE: program an interrupt kernel supporting four levels of priority.
% PROBLEM: higher priority interrupts preempt lower priority interrupt
% processes; as much processing as possible with higher priority
% interrupts enabled (disable only for the shortest time); a proper
% mechanism to resume preempted lower-level handlers. Handler bodies may
% be simulated, e.g. by counting interrupts per level.
% ASSUMPTIONS: four priority levels 0..3 (lower number = higher priority);
% interrupt vector at 20(8), 4 bytes per level (20, 24, 30, 34 octal)
% holding handler addresses; the handler is invoked by an implicit call,
% returns when done; context saved/restored automatically, but interrupt
% enable state is not part of the context. Interrupts are enabled/disabled
% by 'SIN <operand>' using bits 0-3 of the operand word (1 = enable);
% SIN DISABLE ALL with DA=0 disables all. No clearing required.
% GUIDELINES: as for EX 1; it should also be easy to replace handler
% bodies (e.g. at run time).
% ----------------------------------------------------------------------

CAPSULE interrupt_handler EXPORTS NONE;


% Number of pending interrupts possible for each level
CONST queuesize := 5;

% These are the MAILBOXes into which the interrupts are queued.
VAR m0: MAILBOX[BOOL](queuesize) LOCATION (INTERRUPT 16);
VAR m1: MAILBOX[BOOL](queuesize) LOCATION (INTERRUPT 20);
VAR m2: MAILBOX[BOOL](queuesize) LOCATION (INTERRUPT 24);
VAR m3: MAILBOX[BOOL](queuesize) LOCATION (INTERRUPT 28);

VAR a0,a1,a2,a3: ACT;

VAR count0,count1,count2,count3: INT;

TASK interrupt_level0 IMPORTS m0,count0;
  SET_PRIORITY (ME,255);
  WHILE TRUE REPEAT
        VAR i: BOOL;
        RECEIVE (m0,i);

        % This is the "body" of the interrupt handler.  For
        % simplicity, we just assume that it increments a variable.
        % The same for the other TASKs below.
        count0 := count0 + 1;
  END REPEAT;
  END TASK interrupt_level0;

TASK interrupt_level1 IMPORTS m1,count1;
  SET_PRIORITY (ME,254);
  WHILE TRUE REPEAT
        VAR i: BOOL;
        RECEIVE (m1,i);

        % Body -- perhaps different from level0
        count1 := count1 + 1;
  END REPEAT;
  END TASK interrupt_level1;

 TASK interrupt_level2 IMPORTS m2,count2;
  SET_PRIORITY (ME,253);
  WHILE TRUE REPEAT
        VAR i: BOOL;
        RECEIVE (m2,i);

        % Body
        count2 := count2 + 1;
  END REPEAT;
  END TASK interrupt_level2;


TASK interrupt_level3 IMPORTS m3,count3;
  SET_PRIORITY (ME,252);
  WHILE TRUE REPEAT
        VAR i: BOOL;
        RECEIVE (m3,i);

        % Body
        count3 := count3 + 1;
  END REPEAT;
  END TASK interrupt_level3;

  % Initiate tasks upon exposure of capsule.
  CREATE interrupt_level0 NAMED a0;
  CREATE interrupt_level1 NAMED a1;
  CREATE interrupt_level2 NAMED a2;
  CREATE interrupt_level3 NAMED a3;

  END CAPSULE interrupt_handler;
