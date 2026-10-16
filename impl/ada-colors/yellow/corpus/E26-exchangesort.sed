# Fixes of the exchange sort (p.1119).
# 1. the words are IMPORT and EXPORT (rules 4-5)
s/^  IMPORTS String, ASCII;/  IMPORT String, ASCII;/
s/^  EXPORTS Sort;/  EXPORT Sort;/
# 2. LENGTH is not among the standard operations (XI): the length of a
#    one-dimensional array is HIGH - LOW + 1
s/LENGTH(\([a-zA-Z0-9]*\(\[1\]\)*\))/((HIGH(\1, 1) - LOW(\1, 1)) + 1)/g
# 3. relational operators bind loosest (VIII): the conditions need
#    parentheses
s/WHILE s1\[char\] > s2\[char\] AND char <= \(.*\) DO$/WHILE (s1[char] > s2[char]) AND (char <= \1) DO/
# 4. stringARRAY is not stringArray (names are case sensitive, p.994)
s/stringARRAY/stringArray/g
# 5. Exchange(i, i+1): i is a constant and i+1 a value, so the formals
#    cannot be VAR (X.A.2)
s/PROCEDURE Exchange (VAR i1, i2:/PROCEDURE Exchange (CONST i1, i2:/
# 6. Exchange assigns lastSorted, declared after it: a composite
#    declaration that depends on a simple one comes after it (X.G); the
#    VAR declarations move before Exchange
/^    VAR$/,/^                  := ((HIGH(stringArray, 1) - LOW(stringArray, 1)) + 1);$/d
s/^    PROCEDURE Exchange/    VAR lastUnsorted: INTEGER [1..((HIGH(stringArray, 1) - LOW(stringArray, 1)) + 1)-1]\
        := ((HIGH(stringArray, 1) - LOW(stringArray, 1)) + 1)-1;\
      lastSorted: INTEGER [1..((HIGH(stringArray, 1) - LOW(stringArray, 1)) + 1)]\
        := ((HIGH(stringArray, 1) - LOW(stringArray, 1)) + 1);\
    PROCEDURE Exchange/
# 7. Exchange and Sort fall out of their bottom (IX.A.6)
s/^      lastSorted := i1;$/      lastSorted := i1; RETURN/
s/^    ENDLOOP unsorted;$/    ENDLOOP unsorted; RETURN/
