MODULE LM;  (*символьная языковая модель: MLP Бенжио, контекст 8 символов; выпуск №2*)
  IMPORT SYSTEM, Files, Texts, Oberon;

  (* Размеры обязаны совпадать с lm/train.py. Веса — файл LM.Weights:
     заголовок (магия, V, C, E, H, V кодов символов), затем emb, w1, b1, w2, b2
     словами в представлении RISC5.

     ⚠ Порядок операций здесь — контракт с эталоном lm/ref.py: он повторяет
     каждое сложение и умножение в той же последовательности и в арифметике
     RISC5. Переставить слагаемые — значит получить другой текст.

     Окно замера: LED(1) перед шагом модели, LED(0) после. Стенд norebo_tb
     считает такты только внутри окна: загрузка весов и вывод в него не входят. *)

  CONST V = 36; C = 8; E = 16; H = 256; K = C*E;
    Magic = 314D4CH;

  TYPE Model = POINTER TO ModelDesc;
    ModelDesc = RECORD
      emb: ARRAY V*E OF REAL;
      w1: ARRAY H*K OF REAL;
      b1: ARRAY H OF REAL;
      w2: ARRAY V*H OF REAL;
      b2: ARRAY V OF REAL
    END;

  VAR W: Texts.Writer; m: Model;
    vocab: ARRAY V OF CHAR;
    x: ARRAY K OF REAL; h: ARRAY H OF REAL; z: ARRAY V OF REAL;
    ctx: ARRAY C OF INTEGER;
    seed: INTEGER;
    (* константы задаются битами, а не десятичной записью: десятичную переводит
       в двоичную сам компилятор своей арифметикой, и эталону пришлось бы
       повторять ещё и её *)
    c1, p0, p1, p2, q0, q1, lo, half, invT, scale: REAL;

  PROCEDURE Load(name: ARRAY OF CHAR): BOOLEAN;
    VAR f: Files.File; r: Files.Rider; i, n: INTEGER; ok: BOOLEAN;
  BEGIN f := Files.Old(name); ok := f # NIL;
    IF ok THEN Files.Set(r, f, 0);
      Files.ReadInt(r, n); ok := n = Magic;
      Files.ReadInt(r, n); ok := ok & (n = V);
      Files.ReadInt(r, n); ok := ok & (n = C);
      Files.ReadInt(r, n); ok := ok & (n = E);
      Files.ReadInt(r, n); ok := ok & (n = H);
      FOR i := 0 TO V-1 DO Files.ReadInt(r, n); vocab[i] := CHR(n) END ;
      IF ok THEN NEW(m); ok := m # NIL END ;
      IF ok THEN
        FOR i := 0 TO V*E-1 DO Files.ReadReal(r, m.emb[i]) END ;
        FOR i := 0 TO H*K-1 DO Files.ReadReal(r, m.w1[i]) END ;
        FOR i := 0 TO H-1 DO Files.ReadReal(r, m.b1[i]) END ;
        FOR i := 0 TO V*H-1 DO Files.ReadReal(r, m.w2[i]) END ;
        FOR i := 0 TO V-1 DO Files.ReadReal(r, m.b2[i]) END ;
        ok := ~r.eof
      END
    END
    RETURN ok
  END Load;

  (* exp по схеме Math.exp Вирта (NW 12.10.2013); ниже lo — ноль *)
  PROCEDURE Exp(x: REAL): REAL;
    VAR n: INTEGER; p, y, yy: REAL;
  BEGIN
    IF x < lo THEN p := 0.0
    ELSE y := c1*x;
      n := FLOOR(y + half); y := y - FLT(n);
      yy := y*y;
      p := ((p2*yy + p1)*yy + p0)*y;
      p := p/((yy + q1)*yy + q0 - p) + half;
      PACK(p, n+1)
    END
    RETURN p
  END Exp;

  PROCEDURE Index(ch: CHAR): INTEGER;
    VAR i: INTEGER;
  BEGIN i := V-1;
    WHILE (i > 0) & (vocab[i] # ch) DO DEC(i) END
    RETURN i
  END Index;

  PROCEDURE Push(c: INTEGER);
    VAR i: INTEGER;
  BEGIN FOR i := 0 TO C-2 DO ctx[i] := ctx[i+1] END ; ctx[C-1] := c
  END Push;

  (* один символ: прямой проход и выборка *)
  PROCEDURE Step(): INTEGER;
    VAR i, j, k, base: INTEGER; s, mx, t, r: REAL;
  BEGIN
    k := 0;
    FOR i := 0 TO C-1 DO base := ctx[i]*E;
      FOR j := 0 TO E-1 DO x[k] := m.emb[base+j]; INC(k) END
    END ;
    base := 0;
    FOR j := 0 TO H-1 DO s := m.b1[j];
      FOR k := 0 TO K-1 DO s := s + x[k]*m.w1[base+k] END ;
      IF s > 0.0 THEN h[j] := s ELSE h[j] := 0.0 END ;
      INC(base, K)
    END ;
    base := 0;
    FOR i := 0 TO V-1 DO s := m.b2[i];
      FOR j := 0 TO H-1 DO s := s + h[j]*m.w2[base+j] END ;
      z[i] := s; INC(base, H)
    END ;
    mx := z[0];
    FOR i := 1 TO V-1 DO IF z[i] > mx THEN mx := z[i] END END ;
    t := 0.0;
    FOR i := 0 TO V-1 DO z[i] := Exp((z[i] - mx)*invT); t := t + z[i] END ;
    seed := seed*1103515245; seed := seed + 12345;
    r := FLT(seed DIV 10000H MOD 8000H)*scale*t;
    i := 0; s := z[0];
    WHILE (i < V-1) & (s <= r) DO INC(i); s := s + z[i] END
    RETURN i
  END Step;

  (* LM.Generate n seed "затравка" — n символов после затравки. Текст идёт в
     журнал и, для автоматической сверки с эталоном, в файл LM.Out: с экрана
     текст не прочитать, а файл снимается с образа диска на хосте. *)
  PROCEDURE Generate*;
    VAR S: Texts.Scanner; n, i, c: INTEGER; f: Files.File; r: Files.Rider;
  BEGIN Texts.OpenScanner(S, Oberon.Par.text, Oberon.Par.pos); Texts.Scan(S);
    IF S.class = Texts.Int THEN n := S.i; Texts.Scan(S);
      IF S.class = Texts.Int THEN seed := S.i; Texts.Scan(S) ELSE seed := 1 END ;
      IF Load("LM.Weights") THEN
        f := Files.New("LM.Out"); Files.Set(r, f, 0);
        FOR i := 0 TO C-1 DO ctx[i] := 0 END ;
        IF S.class = Texts.String THEN i := 0;
          WHILE S.s[i] # 0X DO
            Push(Index(S.s[i])); Texts.Write(W, S.s[i]); Files.Write(r, S.s[i]); INC(i)
          END
        END ;
        Texts.Append(Oberon.Log, W.buf);
        FOR i := 1 TO n DO
          LED(1); c := Step(); LED(0);
          Push(c); Texts.Write(W, vocab[c]); Files.Write(r, vocab[c]);
          IF i MOD 64 = 0 THEN Texts.WriteLn(W) END ;
          Texts.Append(Oberon.Log, W.buf)
        END ;
        Files.Register(f); Texts.WriteLn(W)
      ELSE Texts.WriteString(W, "LM: no LM.Weights or no memory"); Texts.WriteLn(W)
      END ;
      Texts.Append(Oberon.Log, W.buf)
    END
  END Generate;

BEGIN Texts.OpenWriter(W);
  c1 := SYSTEM.VAL(REAL, 3FB8AA3CH); p0 := SYSTEM.VAL(REAL, 44BD3BA7H);
  p1 := SYSTEM.VAL(REAL, 41A19D15H); p2 := SYSTEM.VAL(REAL, 3CBD304DH);
  q0 := SYSTEM.VAL(REAL, 458880B6H); q1 := SYSTEM.VAL(REAL, 43692DA1H);
  lo := SYSTEM.VAL(REAL, 0C1A00000H); half := SYSTEM.VAL(REAL, 3F000000H);
  invT := SYSTEM.VAL(REAL, 3FA00000H); scale := SYSTEM.VAL(REAL, 38000000H)
END LM.
