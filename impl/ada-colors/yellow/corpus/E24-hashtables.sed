# Fixes of the hash table module (pp.1117-1118).
# 1. a CONST declaration names a representation (rule 7)
s/CONST index = Scan(key, table).index;/CONST index: INTEGER [0..tablesize] = Scan(key, table).index;/
# 2. the constant is tablesize; tableSize is not declared (names are case
#    sensitive, p.994)
s/tableRange = INTEGER \[1..tableSize\];/tableRange = INTEGER [1..tablesize];/
# 3. 0 means "no slot" and "not found", but tableRange starts at 1: as
#    printed the first Scan stores 0 in a tableRange and raises OUT_OF_RANGE
s/IndexSlot = RECORD CONST index, slot: tableRange ENDRECORD;/IndexSlot = RECORD CONST index, slot: INTEGER [0..tablesize] ENDRECORD;/
s/VAR slot: tableRange := 0;/VAR slot: INTEGER [0..tablesize] := 0;/
# 4. MOD takes the number of entries, not the representation tableRange
s/(key+i) MOD tableRange + 1;/(key+i) MOD tablesize + 1;/
# 5. Tag is declared nowhere: the case-selection component is flag
s/SELECT Tag(table\[probe\])/SELECT table[probe].flag/
# 6. Delete falls out of its bottom (IX.A.6)
s/THEN table\[index\] := TableEntry(deleted) ENDIF$/THEN table[index] := TableEntry(deleted) ENDIF; RETURN/
# 7. slot is a component of indexSlot, not a variable of Insert
s/THEN table\[slot\]:=TableEntry(full, key); RETURN TRUE/THEN table[indexSlot.slot]:=TableEntry(full, key); RETURN TRUE/
