% RED sample program C.1: Matrix-Vector Package
% Source: RED Rationale, Intermetrics, March 1979, Appendix C.1 (Sample RED Programs),
%   transcription at iment.com/maida/computer/redrat (samples.htm).
% Not a DoD contract test problem; GREEN has no counterpart. Kept as an extra RED test.
% Statement (from the Rationale): a library capsule realizing matrix and vector
%   arithmetic; illustrates data encapsulation and operator overloading.
% Note: the original opens "CAPSULE matrix_vector_package" but closes
%   "END CAPSULE vector_matrix_package" and the usage example says
%   "EXPOSE ALL FROM vector_matrix_package"; kept as printed.
% The Rationale first prints an outline (signatures only) of the capsule; it is
%   omitted here because the full text below repeats every declaration.
% Note: the usage example computes "v * m" (vector * matrix), an operator the
%   capsule does not declare (it has matrix * vector); kept as printed.
% ---------------------------------------------------------------------------
CAPSULE matrix_vector_package EXPORTS ALL;

CONST mvprec := 6;
CONST mvmax := 1.0E99;
CONST mvmin := -mvmax;
CONST maxdim := 100; 

ABBREV mvfloat : FLOAT(mvprec, mvmin .. mvmax);
ABBREV dim : INT(2 .. maxdim);

TYPE matrix(m : dim, n : dim) :
        ARRAY INT(1 .. m), INT(1 .. n) OF mvfloat;

TYPE vector(n : dim) :
        ARRAY INT(1 .. n) OF mvfloat;

FUNC *(CONST b: FLOAT, READONLY c : vector) => vector(c.n);
    VAR a: vector(c.n);
    % Compute a := bc for float b and vector c.
    FOR i : INT(1 .. c.n) REPEAT
        a(i) := b * c(i);
    END REPEAT;
    RETURN a;
END FUNC *;

FUNC *(READONLY b : vector, CONST c : float) => vector(b.n);
    VAR a : vector(b.n);
    % Compute a := bc for vector b and float c.
    % As is standard for commutative operators, this function
    % simply calls its commutative twin. The overhead
    % of the extra call is eliminated by expanding
    % the function inline.
    PRAGMAT INLINE;
    a := c*b;
    RETURN a;
END FUNC *;

FUNC *(CONST b : FLOAT, READONLY c : matrix) => matrix (c.m,c.n);
    VAR a : matrix(c.m, c.n);
    % Compute a:= bc for float b and matrix c.
    FOR i : INT(1 .. c.m) REPEAT
        FOR j : INT(1 .. c.n) REPEAT
            a(i,j) := b * c(i,j);
        END REPEAT;
    END REPEAT;
    RETURN a;
END FUNC *;

FUNC *(READONLY b : matrix, CONST c : FLOAT) => matrix(b.m,b.n);
    VAR a : matrix(b.m, b.n);
    % Compute a := bc for matrix b and float c.
    PRAGMAT INLINE;
    a := c*b;
    RETURN a;
END FUNC *;

FUNC *(READONLY b : matrix, READONLY c : vector) => vector(b.m);
    ASSERT b.n = c.n;
    VAR a : vector(b.m);
    % Compute a := bc for matrix b and vector c.
    FOR i : INT(1 .. b.m) REPEAT
        a(i) := 0.0;
        FOR j : INT(1 .. b.n) REPEAT
            a(i) := a(i) + b(i,j) * c(j);
        END REPEAT;
    END REPEAT;
    RETURN a;
END FUNC *;

FUNC *(READONLY b,c : matrix) => matrix(b.m,c.n);
    ASSERT b.n : c.m;
    VAR a : matrix(b.m, c.n);
    % Compute a := bc for matrices b and c.
    FOR i : INT(1 .. b.m) REPEAT
        FOR k : INT(1 .. c.n) REPEAT
            a(i,k) := 0.0;
            FOR j : INT(1 .. b.n) REPEAT
                a(i,k) := a(i,k) + b(i,j) * c(j,k);
            END REPEAT;
        END REPEAT;
    END REPEAT;
    RETURN a;
END FUNC *;

FUNC dot(READONLY b,c : vector) => mvfloat;
    ASSERT b.n = c.n;
    VAR a : mvfloat := 0.0;
    % Compute a := dot product of b and c.
    FOR i : INT(1 .. b.n) REPEAT
        a := a + b(i) * c(i);
    END REPEAT;
    RETURN a;
END FUNC dot;

FUNC abs(READONLY b : vector) => mvfloat;
    VAR a : mvfloat;
    % Compute a := magnitude of the vector b.
    PRAGMAT INLINE;
    a := sqrt(dot(b,b));
    RETURN a;
END FUNC abs;

FUNC *(READONLY b,c : vector(3)) => vector(3);
    VAR a : vector(3);
    % Compute a := cross product of b and c.
    a(1) := b(2) * c(3) - c(2) * b(3);
    a(2) := b(3) * c(1) - c(3) * b(1);
    a(3) := b(1) * c(2) - c(1) * b(2);
    RETURN a;
END FUNC *;

FUNC +(READONLY b,c : vector) => vector(b.n);
    ASSERT b.n : c.n;
    VAR a : vector(b.n);
    % Compute a := b+c for vectors b and c.
    FOR i : INT(1 .. b.n) REPEAT
        a(i) := b(i) + c(i);
    END REPEAT;
    RETURN a;
END FUNC +;

FUNC -(READONLY b,c : vector) => vector(b.n);
    ASSERT b.n = c.n;
    VAR a: vector(b.n);
    % Compute a := b-c for vectors b and c.
    FOR i : INT(1 .. b.n) REPEAT
        a(i) := b(i) - c(i);
    END REPEAT; `
    RETURN a;
END FUNC -;

FUNC -(READONLY b : vector) => vector(b.n);
    VAR a: vector(b.n);
    % Compute a := -b for vector b.
    FOR i : INT(1 .. b.n) REPEAT
        a(i) := -b(i);
    END REPEAT;
    RETURN a;
END FUNC -;

FUNC +(READONLY b,c : matrix) => matrix(b.m, b.n);
    ASSERT b.m = c.m;
    ASSERT b.n = c.n;
    VAR a: matrix(b.m,b.n);
    % Compute a := b+c for matrices b and c;
    FOR i : INT(1 .. b.m) REPEAT
        FOR j : INT(1 .. b.n) REPEAT
            a(i,j) := b(i,j) + c(i,j);
        END REPEAT;
    END REPEAT;
    RETURN a;
END FUNC +;

FUNC -(READONLY b,c : matrix) => matrix(b.m, b.n);
    ASSERT b.m : c.m;
    ASSERT b.n : c.n;
    VAR a: matrix(b.m,b.n);
    % Compute a := b-c for matrices b and c;
    FOR i : INT(1 .. b.m) REPEAT
        FOR j : INT(1 .. b.n) REPEAT
            a(i,j) := b(i,j) - c(i,j);
        END REPEAT;
    END REPEAT;
    RETURN a;
END FUNC -;

FUNC -(READONLY b : matrix) => matrix(b.m, b.n);
    VAR a: matrix(b.m,b.n);
    % Compute a := -b for matrix b.
    FOR i : INT(1 .. b.m) REPEAT
        FOR j : INT(1 .. b.n) REPEAT
            a(i,j) := -b(i,j);
        END REPEAT;
    END REPEAT;
    RETURN a;
END FUNC -;

FUNC trans(READONLY b : matrix) => matrix(b.n, b.m);
    % Compute a := transpose(b);
    VAR a : matrix(b.n,b.m);
    FOR i : INT(1 .. m) REPEAT
        FOR j : INT(1 .. n) REPEAT
            a(j,i) := b(i,j);
        END REPEAT;
    END REPEAT;
    RETURN a;
END FUNC trans;

FUNC identity(n: INT) => matrix(n,n);
    VAR a: matrix(n,n);
    % Compute a := n by n identity matrix
    FOR i: INT(1 .. n) REPEAT
        FOR j: INT(1..n) REPEAT
            a(i,j) := 0.0;
        END REPEAT;
        a(i,i) := 1.0;
    END REPEAT;
    RETURN a;
END FUNC identity;

FUNC **(READONLY b : matrix, CONST k : integer)
    => matrix(b.m, b.m);
    ASSERT b.m = b.n;
    ASSERT ABS(k) <= 10;
    VAR a: matrix(b.m,b.m);
    % Compute a := b**k for matrix b.

    IF k = 0 THEN
        a := identity(b.m);
    ELSEIF k = 1 THEN
        a := b;
    ELSEIF k = -1 THEN
        a := inverse(b);
    ELSEIF k > 0 THEN
        a := realmultip1y(b,k);
    ELSE
        a := realmultip1y(inverse(b), -k);
    END IF;
    RETURN a;

    % Declaration of local routines...

    FUNC realmultiply(READONLY x : matrix, i : INT)
        => matrix(x.n, x.n);
        ASSERT x.m = x.n;
        VAR y: matrix(x.n,x.n);
        % Compute x**i for matrix x and integer i > 0;
        y:=x;
        FOR i : INT(2 .. k) REPEAT
            y := y*x;
        END REPEAT;
        RETURN y; `
    END FUNC realmultiply;

    FUNC inverse(READONLY b : matrix)=> matrix(b.n, b.n);
        ASSERT b.n = b.m ;
        VAR a: matrix(b.n,b.n);
        % Compute a := inverse of b for square matrix b.
        % The algorithm uses Gauss reduction with
        % maximal column pivots. To reduce the bookkeeping,
        % rows are actually interchanged.
        CONST n := b.n;
        VAR x : matrix(n,n) := b; % working copy of b
        a := identity(n);
        upperTriangle;
        backSubstitute;
        RETURN a;

        % Local routines in inverse...
        PROC upperTriangle IMPORTS a, x;
        % Eliminate i'th variable
            elim_loop FOR i : INT(1 .. n-1) REPEAT
                VAR j : INT(i .. n) := i;
                % Find i'th pivot.
                FOR k : INT(i+1 .. n) REPEAT
                    IF x(k,i) > x(j,i) THEN j := k; END IF;
                END REPEAT;
                % Interchange i'th and j'th rows
                      % to install the pivot
                IF i = j THEN
                    FOR k : INT(1 .. n) REPEAT
                        swap(a(i,k), a(j,k));
                    END REPEAT;
                    FOR k : INT(i+1 .. m) REPEAT
                        swap(x(i,k), x(j,k)); `
                    END REPEAT;
                END IF;
            
                % Subtract i'th row from all succeeding rows.      
                subt_1oop FOR k : INT(i+1 .. n) REPEAT
                    CONST z := x(k,i)/x(i,i);
                    FOR p : INT(i+1 .. n) REPEAT
                        x(k,p) := x(k,p) - z * x(i,p);
                    END REPEAT;
                    FOR p : INT(1 .. n) REPEAT
                        a(k,p) := a(k,p) - z * a(i,p);
                    END REPEAT;
                END REPEAT subt_loop;
            END REPEAT elim_loop;
    
        END PROC upperTriangle;

        PROC backSubstitute IMPORTS a, x;
            FOR k : 1NT(1 .. n) REPEAT
                % Compute the p'th variable
                CONST p := n+1-k;
                % Eliminate the i'th variable
                FOR r : INT(p+1 .. n) REPEAT
                    FOR s : INT(1 .. n) REPEAT
                        a(p,s) := a(p,s) - x(p,r) * a(r,s);
                    END REPEAT;
                END REPEAT;
                % reduce the coefficient to 1
                FOR r : INT(1 .. m) REPEAT
                    a(p,r) := a(p.r)/x(p,p);
                END REPEAT;
            END REPEAT;

        END PROC backSubstitute;

    END FUNC inverse;

END FUNC **;

FUNC determ(READONLY b : matrix) => mvfloat;
    ASSERT b.m = b.n;
    VAR a: mvfloat;
    % Compute a := determinant of b by reducing
    % a to an upper triangular form and then
    % multiplying the diagonal elements. The
    % code here is a simplification of the
    % code found in upperTriangle used by
    % inverse.
    CONST n := b.n;
    % Destroyable copy of b
    VAR x : matrix(n,n) := b;
    
    determ_loop FOR i : INT(1 .. n-1) REPEAT
        VAR j : INT(i .. n) := i;
        % Find the ith pivot.
        FOR k : INT(i+1 .. n) REPEAT
            IF x(k,i) > x(j,i) THEN j := k; END IF;
        END REPEAT;
        IF 1 /= j THEN
            FOR k : INT(i .. n) REPEAT
                swap(x(i,k), x(j,k));
            END REPEAT;
        END IF;
    
        % Subtract i'th row from all succeeding rows.
        FOR k : INT(i+1 .. n) REPEAT
            CONST z := x(k,i)/x(i,i);
            FOR p : INT(i+1 .. n) REPEAT
                x(k.p) := x(k,p) - z * x(i.p);
            END REPEAT;
       END REPEAT;
   
        % Multiply diagonal elements.
        a := x(1,1);
        FOR i : INT(2 .. n) REPEAT
            a := a * x(i,i);
        END REPEAT;
    END REPEAT determ_loop;
    RETURN a;
END FUNC determ;

FUNC trace(READONLY b : matrix) => mvfloat;
    ASSERT b.m = b.n;
    VAR a: mvfloat := 0.0;
    % Compute a := trace of matrix b.
    FOR i : INT(1 .. b.n) REPEAT
        a := a + b(i,i);
    END REPEAT;
    RETURN a;
END FUNC trace;

PROC swap (VAR a,b: mvfloat);
    % Interchange a and b
    PRAGMAT INLINE;
    CONST temp := a;
    a := b;
    b := temp;
END PROC swap;

END CAPSULE vector_matrix_package;

%Example of use of vector-matrix package
% ---------------------------------------
EXPOSE ALL FROM vector_matrix_package;
VAR v: vector (3);
VAR m: matrix (3, 3);   % OCR? printed "VAR mz matrix"
v := v * m;
