# the placeholders: N starts at 4, M is its square, which is printed
s/^     \.\.\.$//
s/N := a positive integral value;/N := 4;/
s/CONST M: INTEGER := some expression using N;/CONST M: INTEGER := N * N;/
s/\.\.\. using M;/PUT_LINE (TO_CHAR (M));/
