% RED solution to DoD-1 contract test problem 8: General-Purpose Realtime Scheduler
% Source: RED Rationale, Intermetrics, Inc., March 1979, Appendix B.2.8
%         (image pb-49example1.jpg). Transcribed from the page image. The
%         fragment is not wrapped in a CAPSULE; DATA_LOCK d is not declared in
%         the printed text. "24**HOURS" in TASK execute is as printed.
%
% PURPOSE: An exercise to test the possibilities for relating computational
% processes to real time.
%
% PROBLEM: Write a library module that schedules computational processes in
% actual real time. The number of processes varies, determinable at link time.
% The time span may be restricted to 24 hours (times computed modulo 24 h).
% Real time is accessible by the command TIME(operand), which deposits the
% current time as an ASCII string HHMMSS. The main purpose is to initiate
% execution of processes according to predefined real-time conditions, once
% or repeatedly, connected to the scheduler by operations of the form:
%     EXECUTE processname, time
%     EXECUTE time            /* the process performing this operation */
%     EXECUTE processname, start-time, repetition-interval
% The representation of these operations (not necessarily procedure calls)
% is to be proposed by the language designer, to fit naturally into user
% programs and be efficiently implementable. Processes due at the same time
% are activated in priority order; a library sort routine for the scheduled
% processes' control blocks should be usable for other data types, showing
% how parameter passing fits this without much runtime overhead (the sort
% itself may be simple). Processes must be disconnectable from the scheduler
% at any time, by themselves or by other processes.
%
% ASSUMPTIONS: A system clock delivering ticks of sufficient frequency. How
% processes are made known to the scheduler depends on the implementation
% model underlying the language proposal.
% ---------------------------------------------------------------------------

% A process [with body described meta-linguistically as BODY]
% that runs once at a certain time STARTTIME and then quits.
% Note that, because of the use of REGION, only one such "real-time"
% process can happen at a time.

TASK sampleprocess(starttime:INT(0..24*HOURS)) IMPORTS d;

    VAR next:INT(0..24*HOURS) := starttime;

    DELAY_UNTIL (next);

    REGION d DO
        % Here put the body of the process.
        BODY;
    END REGION;

    END TASK sampleprocess;

% A process [with body described meta-linguistically as BODY]
% that runs once at a certain time STARTTIME and then runs again
% every INTERVAL amount of time until COUNT executions is reached.

TASK sampleinterval (starttime:INT(0..24*HOURS), interval:INT,
                     count:INT(1..100));
    VAR i:INT(1..100);
    VAR next:INT(0..24*HOURS) := starttime;

    DELAY_UNTIL (next);

    FOR i:INT(1..count) REPEAT
        REGION d DO
            % Here insert the body of the task.
            BODY;
        END REGION;

    next := next + interval;

    DELAY_UNTIL (next);
    END REPEAT;

    END TASK sampleinterval;


% A more complex version of scheduling involving a GENERIC
% task that is passed a task to execute, starting at time START,
% being repeated at interval REP, with priority PRIOR, and
% which will be signaled that it is completed via a mailbox DONE.

GENERIC t:TASK
TASK execute [t] (start:INT(0..24*HOURS), rep:INT(0..24**HOURS),
            prior:INT(1..255), VAR done:MAILBOX[INT(0..0)](1));
        VAR d:INT(0..0);
        VAR next:INT(0..24*HOURS) := start;

        WHILE TRUE REPEAT
                VAR a:ACT;

                SET_PRIORITY (a, prior);    % Set priority.
                WAIT
                        DELAY_UNTIL (next) => ;
                        RECEIVE (done, d) => RETURN;
                END WAIT;

                % Now time to start the process.
                REGION d DO
                        CREATE t NAMED a;

                        next := next + rep;

                        WAIT
                                DELAY_UNTIL_INACTIVE (a) => ;
                                RECEIVE (done, d) => TASK_END (a);
                                                     RETURN;
                        END WAIT;
                END REGION;
        END REPEAT;

END TASK execute;

% EXECUTE can now be called with a form like:

CREATE execute [job] (s,cycle,10,done) NAMED av;

% where JOB is the process to be run, and the other parameters
% in the signature describe how it is to be executed.
