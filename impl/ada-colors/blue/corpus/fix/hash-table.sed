# the open phrases: integers, a table of 5 entries, -1 for an empty slot
s/TYPE T = value type;/TYPE T = INTEGER;/
s/:= max number of table entries;/:= 5;/
s/:= empty table slot value;/:= -1;/
# the search is repeated for a few values, given by the driver's VALUES
s/^        \.\.\.$/        LOOP FOR K IN [1:8] DO/
s/X := value to search for;/X := VALUES (K);/
s/FULL --> print error message; END;/FULL --> PUT_LINE ('the table is full: ' !! TO_CHAR (X)); END;/
$a\
        END LOOP K;
