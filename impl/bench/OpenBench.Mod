MODULE OpenBench;
(* Счётная нагрузка на ОТКРЫТЫХ массивах (выпуск 14, дескрипторы).
   Те же ядра, что ArrBench (сортировка, свёртка), но массив приходит в процедуру
   параметром ARRAY OF T. Длина здесь известна только во время исполнения, и
   CHK (предел в команде) её не покрывает: в E проверка остаётся программной,
   в F её делает IDX по дескриптору. Плюс ARRAY OF CHAR — строки, главный
   источник открытых массивов в системе.
   Результат проверяется ASSERT: неверный код не должен дать правдоподобных тактов. *)
  IMPORT Norebo;

  CONST N = 1000; L = 1000;

  VAR a: ARRAY N OF INTEGER; s: ARRAY L OF CHAR; total: INTEGER;

  PROCEDURE Fill(VAR x: ARRAY OF INTEGER; VAR t: ARRAY OF CHAR);
    VAR i: INTEGER;
  BEGIN
    FOR i := 0 TO LEN(x) - 1 DO x[i] := i * 7 MOD 1021 END ;
    FOR i := 0 TO LEN(t) - 2 DO t[i] := CHR(ORD("a") + i MOD 26) END ;
    t[LEN(t) - 1] := 0X
  END Fill;

  (* Пузырьковая сортировка: две индексации на сравнение, четыре на обмен *)
  PROCEDURE Sort(VAR x: ARRAY OF INTEGER);
    VAR i, j, t, n: INTEGER;
  BEGIN n := LEN(x); i := 0;
    WHILE i < n DO j := 0;
      WHILE j < n - 1 - i DO
        IF x[j] > x[j+1] THEN t := x[j]; x[j] := x[j+1]; x[j+1] := t END ;
        INC(j)
      END ;
      INC(i)
    END
  END Sort;

  PROCEDURE Sum(VAR x: ARRAY OF INTEGER): INTEGER;
    VAR i, r: INTEGER;
  BEGIN r := 0; FOR i := 0 TO LEN(x) - 1 DO r := r + x[i] END ;
    RETURN r
  END Sum;

  (* Строка: подсчёт символа до 0X — как Texts/ORS ходят по именам *)
  PROCEDURE Count(t: ARRAY OF CHAR; c: CHAR): INTEGER;
    VAR i, k: INTEGER;
  BEGIN i := 0; k := 0;
    WHILE t[i] # 0X DO IF t[i] = c THEN INC(k) END ; INC(i) END ;
    RETURN k
  END Count;

  PROCEDURE Run*;
    VAR i, k, r: INTEGER;
  BEGIN Fill(a, s); r := Sum(a); Sort(a);
    FOR i := 0 TO N - 2 DO ASSERT(a[i] <= a[i+1]) END ;
    ASSERT(Sum(a) = r);
    k := 0; FOR i := 1 TO 200 DO k := k + Count(s, "e") END ;
    ASSERT(k = 200 * 39);   (* 999 символов, "e" на позициях 4, 30, ...: 39 раз *)
    total := r + k
  END Run;

END OpenBench.
