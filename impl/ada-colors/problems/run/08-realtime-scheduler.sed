# Changes that make RED contract problem 8 (1979) translate. The solution is a
# sketch: none of these would pass a RED translator, although the Rationale
# says the syntax of all solutions was checked by the Test Translator.
# a translation unit is a capsule; d is a DATA_LOCK that is never declared
1i\
CAPSULE scheduler EXPORTS ALL; EXPOSE ALL FROM EXTERNAL jobs;\
VAR d : DATA_LOCK;
# BODY stands for the body of the process ("described meta-linguistically")
s/^        BODY;$/        body_of_process;/
s/^            BODY;$/            body_of_process;/
# sampleinterval uses d without importing it
s/^                     count:INT(1..100));/                     count:INT(1..100)) IMPORTS d;/
# a VAR i that the FOR index hides is unused
s/^    VAR i:INT(1..100);$//
# 24**HOURS for 24*HOURS
s/rep:INT(0..24\*\*HOURS)/rep:INT(0..24*HOURS)/
# execute's own d (the message received) is not the DATA_LOCK d of its REGION
s/^        VAR d:INT(0..0);/        VAR dm:INT(0..0);/
s/RECEIVE (done, d) =>/RECEIVE (done, dm) =>/
# WAIT needs WHEN before each alternative, and an empty body has no ';'
s/^                        DELAY_UNTIL (next) => ;/                WHEN DELAY_UNTIL (next) =>/
s/^                        RECEIVE (done, dm) => RETURN;/                WHEN RECEIVE (done, dm) => RETURN;/
s/^                                DELAY_UNTIL_INACTIVE (a) => ;/                        WHEN DELAY_UNTIL_INACTIVE (a) =>/
s/^                                RECEIVE (done, dm) => TASK_END (a);/                        WHEN RECEIVE (done, dm) => EXTERMINATE (a);/
# the priority can only be set once the activation exists: after CREATE
s/^                SET_PRIORITY (a, prior);    % Set priority.//
s/^                        CREATE t NAMED a;/                        CREATE t NAMED a;\
                        SET_PRIORITY (a, prior);/
# the usage example is moved into problems/run/08-main.red
s/^CREATE execute \[job\] (s,cycle,10,done) NAMED av;//
# REP is a reserved word, so the parameter rep is renamed
s/rep:INT(0..24\*HOURS)/cycle:INT(0..24*HOURS)/
s/next := next + rep;/next := next + cycle;/
# execute uses the lock d without importing it
s/^            prior:INT(1..255), VAR done:MAILBOX\[INT(0..0)\](1));/            prior:INT(1..255), VAR done:MAILBOX[INT(0..0)](1)) IMPORTS d;/
$a\
END CAPSULE scheduler;
