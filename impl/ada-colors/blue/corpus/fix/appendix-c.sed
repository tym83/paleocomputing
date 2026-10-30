# ---- SYSTEM (C-5)
# elided items of the USES list and of DEFINES: the example has only LT33s
s/(DATA: (NUM_OF_LT33,\.\.\.$/(DATA: (NUM_OF_LT33/
s/NUM_OF_LT33,\.\.\.); % numbers of devices/NUM_OF_LT33); % numbers of devices/
# a path starts with PATH (4.6.1, [4-87]); the headers print without it
s/^             LT33_PRINTERS$/             PATH LT33_PRINTERS/
s/^             LT33_KEYBOARDS$/             PATH LT33_KEYBOARDS/
s/^             SCHEDULE_APPLICATION$/             PATH SCHEDULE_APPLICATION;/
# a misprint: - for _
s/END PATH LT33-PRINTERS;/END PATH LT33_PRINTERS;/
# ---- APPLICATION (C-6): the other segments are the driver's APPLICATION_CODE, the
# elided body of APPLICATION_ROUTINE calls it
s/              OTHER_SEGS \.\.\.)/              APPLICATION_CODE)/
/^% calling environment.  (cf. the WHERE clauses in the IO routine headers).$/a\
             APPLICATION_BODY ( );
# ---- SAFE_TELETYPE (C-6 .. C-8)
# REM is not defined in the document; for the positive operands here it is MOD
s/IF REM(LEN, BYTESIZE) <> 0 THEN/IF LEN MOD BYTESIZE <> 0 THEN/
s/IF REM (LEN, BYTESIZE) <> 0 THEN/IF LEN MOD BYTESIZE <> 0 THEN/
# ---- BINARY_IO (C-14 ..)
s/MODULES:(SAFE_TELETYPE,\.\.\.))/MODULES:(SAFE_TELETYPE))/
s/TYPE DEVICE_NAME = ENUM (\\LT33, \\CR11,\\RP03,\.\.\.);/TYPE DEVICE_NAME = ENUM (\\LT33, \\CR11,\\RP03);/
# fields of a record are declarations, each ending with ; (3.9)
/TYPE FILE (ELEMENT_TYPE : TYPE) =/,/END RECORD;/s/^\( *VAR .*\),$/\1;/
/TYPE FILE (ELEMENT_TYPE : TYPE) =/,/END RECORD;/s/VAR LOCKED: BOOLEAN$/VAR LOCKED: BOOLEAN;/
s/VAR BODY: FILE (ELEMENT_TYPE)$/VAR BODY: FILE (ELEMENT_TYPE);/
# misprints: IO-ERROR, FYS_CHECK
s/SIGNAL IO-ERROR;/SIGNAL IO_ERROR;/
s/FYS_CHECK (PATHNAME,/FSYS_CHECK (PATHNAME,/
# a bitstring literal is BIN followed by the quoted bits ([3-111]), not a call
s/BS := BIN('');/BS := BIN '';/
# the imports-clause belongs to the routine header, before its ; ([4-20])
/PROCEDURE LT33_DEVICE\$BYTE_OUT/,/IMPORTS/s/BS: BIT (BYTESIZE));/BS: BIT (BYTESIZE))/
# IN is a reserved word (2.1.6) and cannot name a procedure: the procedure IN of
# BINARY_IO (C-21) is called FILE_IN here
s/IMPORTS (ROUTINES:(IN));/IMPORTS (ROUTINES:(FILE_IN));/
s/^             IN (F ## BS); /             FILE_IN (F ## BS); /
s/^        PROCEDURE IN (F:FILE (?)$/        PROCEDURE FILE_IN (F:FILE (?)/
s/^             END PROCEDURE IN;$/             END PROCEDURE FILE_IN;/
s/WHERE T NEEDS (TO_BIT (T REP R) RETURNS (BIT(?)));/WHERE T NEEDS (TO_BIT (T REP R) RETURNS (BIT(?)))/
# a ; missing after a signal statement
s/ELSE --> SIGNAL IO_ERROR        %illegal format string/ELSE --> SIGNAL IO_ERROR;       %illegal format string/
# the format characters: a blank for 'S'; the \ of \LF and \CR is not printed
s/STRPUT (SF, STRDUP ('', N_O_I));/STRPUT (SF, STRDUP (' ', N_O_I));/
s/STRPUT (SF, STRDUP (''LF, N_O_I));/STRPUT (SF, STRDUP (''\\LF, N_O_I));/
s/STRPUT (SF, STRDUP (''CR LF, N_O_I));/STRPUT (SF, STRDUP (''\\CR\\LF, N_O_I));/
s/^             ' ', ''CR, ''LF -->$/             ' ', ''\\CR, ''\\LF -->/
# key words are upper case (2.1.6): then for THEN
s/IF I=FS then /IF I=FS THEN /
# END LOOP names the loop identifier of a definite loop (4.5.6.3, constraints)
/GET (SF ## STR\[I:I\]);/{
n
s/END LOOP;/END LOOP I;/
}
# a misprint: FORM_READ for FORMREAD in the trailer
s/END PROCEDURE FORM_READ;/END PROCEDURE FORMREAD;/
# Only types and routines may be exported (4.4: "Own data cannot be made accessible
# outside the module"); NUM_OF_LT33 moves from TELETYPE to the segment, where the
# modules and, through DEFINES, SYSTEM see it
s/^         EXPORTS (NUM_OF_LT33,$/         EXPORTS (/
s/^            EXPORTS (NUM_OF_LT33,$/            EXPORTS (/
s/^            CONST NUM_OF_LT33 : INTEGER := \.\.\.;$//
/^ MODULE SAFE_TELETYPE$/i\
 CONST NUM_OF_LT33 : INTEGER := 2;     % the number of teletypes, elided in C-10\

# the CR11 card reader's module is among the elided device modules (C-13, C-14):
# its case in FILE_IN goes
/^        \\CR11 -->$/,/^                  END;$/d
# 4.1.1: a closed scope that invokes a routine exported from a module, which uses an
# own variable of the module, must import the routine; a path is a closed scope and
# imports the routines it invokes (the semaphore of its CONNECT clause is known
# without importing it). The SYSTEM paths and APPLICATION_ROUTINE print no imports
s/FOR I IN \[1:NUM_OF_LT33\] CONNECT (LT33_PS(I));/FOR I IN [1:NUM_OF_LT33] CONNECT (LT33_PS(I)) IMPORTS (ROUTINES: (OUTPUT_DRIVER));/
s/FOR I IN \[1:NUM_OF_LT33\] CONNECT (LT33_KS(I));/FOR I IN [1:NUM_OF_LT33] CONNECT (LT33_KS(I)) IMPORTS (ROUTINES: (INPUT_DRIVER));/
s/^             PATH SCHEDULE_APPLICATION;$/             PATH SCHEDULE_APPLICATION IMPORTS (ROUTINES: (APPLICATION_ROUTINE));/
s/^        PROCEDURE APPLICATION_ROUTINE ( );$/        PROCEDURE APPLICATION_ROUTINE ( ) IMPORTS (ROUTINES: (APPLICATION_BODY));/
# a comma before RETURNS in the WHERE clause of FORMREAD (C-34; C-36 has none)
s/^                                 ASCII_STR(?)),$/                                 ASCII_STR(?))/
# 5.2: a generic routine that passes objects of its type to another generic names
# that one's WHERE routines in its own WHERE clause; GET and PUT print none
s/^             IMPORTS (ROUTINES:(GET_IN));$/             IMPORTS (ROUTINES:(GET_IN)) WHERE T NEEDS (STORE_(T##T));/
s/^             IMPORTS (ROUTINES: (GET_IN, POSITION));$/             IMPORTS (ROUTINES: (GET_IN, POSITION)) WHERE T NEEDS (STORE_(T##T));/
s/^             IMPORTS (ROUTINES: (PUT_OUT));$/             IMPORTS (ROUTINES: (PUT_OUT)) WHERE T NEEDS (TO_BIT (T REP R) RETURNS (BIT(?)));/
s/^             IMPORTS (ROUTINES: (PUT_OUT, POSITION));$/             IMPORTS (ROUTINES: (PUT_OUT, POSITION)) WHERE T NEEDS (TO_BIT (T REP R) RETURNS (BIT(?)));/
