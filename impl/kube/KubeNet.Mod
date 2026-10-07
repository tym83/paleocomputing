MODULE KubeNet;  (*Kube over Wirth's radio: a control plane and kubelets on separate machines.
  Every message is one radio sub-packet (SCC: 8 header bytes, 24 data bytes) and
  goes to everybody (dadr 0FFH). Messages of several sub-packets are avoided on
  purpose: the radio has no collision avoidance, and two stations sending at once
  would interleave their sub-packets at the receivers.

    heartbeat  kubelet -> all   typ 60H  [cluster][name, 6][n][n pod ids][counter, 2][mac, 4]
    assign     plane   -> all   typ 61H  [cluster][name, 6][n][n pod ids][counter, 2][mac, 4]

  The first byte tags the cluster: one air can carry several clusters, and a
  node must not obey another cluster's control plane that has a node of the
  same name. The tag is computed from the cluster name, (sum of (i+1)*ORD(c[i]))
  MOD 255 + 1, so two different names share a tag with a chance of 1 in 255.

  The tag separates clusters but proves nothing: anybody on the air can send
  it. Every message is therefore signed with the cluster's key: the mac is
  HalfSipHash-2-4 (the 32-bit SipHash, which fits the machine's arithmetic)
  over the message type and every data byte before the mac. A message with a
  wrong mac is dropped. The counter stops replays: each sender numbers its
  messages, and a receiver takes from a sender only numbers newer than the
  last one (serial arithmetic modulo 65536). A sender silent for longer than
  the node timeout may have restarted and counts from anew, so its counter is
  then learned again: a replay is refused while its sender is alive.

  A kubelet sends a heartbeat every second with the pods it runs. The control
  plane takes a heartbeat as "the node is Ready and runs these pods", sends each
  Ready node the pods bound to it every second, and marks a node NotReady when it
  has been silent for five seconds; Kube's scheduler then moves its pods.
  The kubelet runs exactly what the last assignment said: level-triggered, like
  the real one. A lost message is repaired by the next one.

  Commands:
    KubeNet.Serve [cluster [key]]        on the control plane, next to Kube.Start
    KubeNet.Join name [cluster [key]]    on a node; the name is up to 6 characters
    KubeNet.Stop                         either side
  The cluster name is up to 8 characters, "kube" when left out; the key is up
  to 16 hex digits (64 bits), all zero when left out.*)

  IMPORT SYSTEM, SCC, Kernel, Texts, Oberon, Kube;

  CONST
    tBeat = 60H; tAssign = 61H;
    nameLen = 6; maxIds = 10;     (*1 + 6 + 1 + 10 + 2 + 4 = 24 data bytes*)
    hdr = 1 + nameLen + 1;        (*cluster, name, count*)
    tail = 2 + 4;                 (*counter, mac*)
    maxPeers = 32;                (*senders whose counters a receiver keeps*)
    period = 100;                 (*ms between ticks of the task*)
    beat = 1000; ttl = 5000;      (*ms: five missed heartbeats; three moved pods on a lossy air*)

  TYPE
    Ids = ARRAY maxIds OF BYTE;
    Name = ARRAY nameLen+1 OF CHAR;

  VAR
    W: Texts.Writer;
    task: Oberon.Task;
    role: INTEGER;                (*0 none, 1 control plane, 2 node*)
    me: Name;
    run: Ids; nrun: INTEGER;      (*what this node runs*)
    tag: INTEGER;                 (*this cluster*)
    k0, k1: INTEGER;              (*this cluster's key*)
    ctr: INTEGER;                 (*the number of this station's next message*)
    last: INTEGER;                (*time of the last heartbeat or assignment round*)
    peer: ARRAY maxPeers OF RECORD name: Name; ctr, seen: INTEGER END;
    npeers: INTEGER;

  (* ---- HalfSipHash-2-4, 32-bit output ---- *)

  PROCEDURE xor(a, b: INTEGER): INTEGER;
  BEGIN RETURN SYSTEM.VAL(INTEGER, SYSTEM.VAL(SET, a) / SYSTEM.VAL(SET, b))
  END xor;

  PROCEDURE rotl(x, b: INTEGER): INTEGER;
  BEGIN RETURN ROR(x, 32 - b)
  END rotl;

  PROCEDURE round(VAR v0, v1, v2, v3: INTEGER);
  BEGIN
    v0 := v0 + v1; v1 := rotl(v1, 5); v1 := xor(v1, v0); v0 := rotl(v0, 16);
    v2 := v2 + v3; v3 := rotl(v3, 8); v3 := xor(v3, v2);
    v0 := v0 + v3; v3 := rotl(v3, 7); v3 := xor(v3, v0);
    v2 := v2 + v1; v1 := rotl(v1, 13); v1 := xor(v1, v2); v2 := rotl(v2, 16)
  END round;

  PROCEDURE mac(m: ARRAY OF BYTE; len: INTEGER): INTEGER;
    VAR v0, v1, v2, v3, i, j, w, b: INTEGER;
  BEGIN v0 := k0; v1 := k1; v2 := xor(6C796765H, k0); v3 := xor(74656462H, k1);
    i := 0;
    WHILE i + 4 <= len DO
      w := m[i] + m[i+1] * 100H + m[i+2] * 10000H + LSL(m[i+3], 24);
      v3 := xor(v3, w); round(v0, v1, v2, v3); round(v0, v1, v2, v3); v0 := xor(v0, w);
      INC(i, 4)
    END;
    b := LSL(len MOD 100H, 24); j := 0;
    WHILE i < len DO b := b + LSL(m[i], 8*j); INC(i); INC(j) END;
    v3 := xor(v3, b); round(v0, v1, v2, v3); round(v0, v1, v2, v3); v0 := xor(v0, b);
    v2 := xor(v2, 0FFH);
    round(v0, v1, v2, v3); round(v0, v1, v2, v3); round(v0, v1, v2, v3); round(v0, v1, v2, v3);
    RETURN xor(v1, v3)
  END mac;

  (* ---- messages ---- *)

  PROCEDURE send(typ: INTEGER; name: ARRAY OF CHAR; ids: ARRAY OF BYTE; n: INTEGER);
    VAR head: SCC.Header; buf: ARRAY 1+hdr+maxIds+tail OF BYTE; out: ARRAY hdr+maxIds+tail OF BYTE;
      i, len, h: INTEGER;
  BEGIN
    IF n > maxIds THEN n := maxIds END;
    buf[0] := typ; buf[1] := tag;
    FOR i := 1 TO nameLen DO buf[1+i] := 0 END;
    i := 0; WHILE (i < nameLen) & (i < LEN(name)) & (name[i] # 0X) DO buf[2+i] := ORD(name[i]); INC(i) END;
    buf[1+hdr-1] := n;
    FOR i := 0 TO n-1 DO buf[1+hdr+i] := ids[i] END;
    len := hdr + n;
    buf[1+len] := ctr MOD 100H; buf[2+len] := ctr DIV 100H MOD 100H; ctr := (ctr + 1) MOD 10000H;
    h := mac(buf, 1+len+2);
    FOR i := 0 TO 3 DO buf[3+len+i] := ASR(h, 8*i) MOD 100H END;
    FOR i := 0 TO len+tail-1 DO out[i] := buf[1+i] END;   (*the type is signed, not sent*)
    head.dadr := 0FFH; head.typ := typ; head.len := len + tail;
    SCC.SendPacket(head, out)
  END send;

  (*a message's counter is new for its sender; a sender not heard for ttl
    starts anew*)
  PROCEDURE fresh(name: ARRAY OF CHAR; c, now: INTEGER): BOOLEAN;
    VAR i, k, d: INTEGER; ok: BOOLEAN;
  BEGIN k := -1; i := 0;
    WHILE (i < npeers) & (k < 0) DO IF peer[i].name = name THEN k := i END; INC(i) END;
    IF k < 0 THEN
      IF npeers < maxPeers THEN k := npeers; INC(npeers) ELSE k := 0 END;
      i := 0; WHILE (i < nameLen) & (i < LEN(name)) & (name[i] # 0X) DO peer[k].name[i] := name[i]; INC(i) END;
      peer[k].name[i] := 0X; ok := TRUE
    ELSE
      d := (c - peer[k].ctr) MOD 10000H;
      ok := (d > 0) & (d < 8000H) OR (now - peer[k].seen > ttl)
    END;
    IF ok THEN peer[k].ctr := c; peer[k].seen := now END;
    RETURN ok
  END fresh;

  (*the body of a message, already received by SCC.ReceiveHead. TRUE only for
    this cluster's message with a valid mac and a fresh counter; the sender is
    the node's name for a heartbeat, the control plane for an assignment*)
  PROCEDURE read(typ, len, now: INTEGER; VAR name: Name; VAR ids: Ids; VAR n: INTEGER): BOOLEAN;
    VAR buf: ARRAY 1+hdr+maxIds+tail OF BYTE; i, c, h, got: INTEGER; ok: BOOLEAN; from: Name;
  BEGIN ok := (len >= hdr + tail) & (len <= hdr + maxIds + tail);
    IF ok THEN
      buf[0] := typ;
      FOR i := 1 TO len DO SCC.Receive(buf[i]) END;
      n := buf[hdr];
      ok := (buf[1] = tag) & (n = len - hdr - tail)
    ELSE SCC.Skip(len)
    END;
    IF ok THEN
      h := mac(buf, 1+len-4);
      got := buf[1+len-4] + buf[1+len-3] * 100H + buf[1+len-2] * 10000H + LSL(buf[1+len-1], 24);
      ok := got = h
    END;
    IF ok THEN
      FOR i := 0 TO nameLen-1 DO name[i] := CHR(buf[2+i]) END; name[nameLen] := 0X;
      FOR i := 0 TO n-1 DO ids[i] := buf[1+hdr+i] END;
      c := buf[1+hdr+n] + buf[2+hdr+n] * 100H;
      IF typ = tBeat THEN from := name ELSE from := "*plane" END;
      ok := fresh(from, c, now)
    END;
    RETURN ok
  END read;

  PROCEDURE log(s, name: ARRAY OF CHAR; ids: Ids; n: INTEGER);
    VAR i: INTEGER;
  BEGIN Texts.WriteString(W, s); Texts.WriteString(W, name); Texts.WriteString(W, ":");
    FOR i := 0 TO n-1 DO Texts.Write(W, " "); Texts.WriteInt(W, ids[i], 0) END;
    Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
  END log;

  PROCEDURE same(a: Ids; na: INTEGER; b: Ids; nb: INTEGER): BOOLEAN;
    VAR i: INTEGER; ok: BOOLEAN;
  BEGIN ok := na = nb; i := 0;
    WHILE ok & (i < na) DO ok := a[i] = b[i]; INC(i) END;
    RETURN ok
  END same;

  PROCEDURE planeTick;
    VAR head: SCC.Header; name: Name; node: Kube.Name; ids: Ids; n, i, now: INTEGER;
  BEGIN now := Kernel.Time();
    REPEAT SCC.ReceiveHead(head);
      IF head.valid THEN
        IF head.typ = tBeat THEN
          IF read(tBeat, head.len, now, name, ids, n) THEN Kube.NodeSeen(name, now); Kube.Report(name, ids, n) END
        ELSE SCC.Skip(head.len)
        END
      END
    UNTIL ~head.valid;
    Kube.Expire(now, ttl);
    IF now - last >= beat THEN last := now; i := 0;
      WHILE Kube.ReadyNode(i, node) DO
        Kube.PodIds(node, ids, n); send(tAssign, node, ids, n); INC(i)
      END
    END
  END planeTick;

  PROCEDURE nodeTick;
    VAR head: SCC.Header; name: Name; ids: Ids; n, now: INTEGER;
  BEGIN now := Kernel.Time();
    REPEAT SCC.ReceiveHead(head);
      IF head.valid THEN
        IF head.typ = tAssign THEN
          IF read(tAssign, head.len, now, name, ids, n) & (name = me) & ~same(ids, n, run, nrun) THEN
            run := ids; nrun := n; log("kubelet ", me, run, nrun)
          END
        ELSE SCC.Skip(head.len)
        END
      END
    UNTIL ~head.valid;
    IF now - last >= beat THEN last := now; send(tBeat, me, run, nrun) END
  END nodeTick;

  PROCEDURE start(r: INTEGER);
  BEGIN
    IF role # 0 THEN Oberon.Remove(task) END;
    role := r; last := 0; npeers := 0; ctr := Kernel.Time() MOD 10000H;
    SCC.Start(FALSE);    (*no address filter: everything is broadcast*)
    IF r = 1 THEN task := Oberon.NewTask(planeTick, period) ELSE task := Oberon.NewTask(nodeTick, period) END;
    Oberon.Install(task)
  END start;

  (* ---- commands ---- *)

  (*the cluster tag of a name: (sum of (i+1)*ORD(c[i])) MOD 255 + 1*)
  PROCEDURE tagOf(s: ARRAY OF CHAR): INTEGER;
    VAR i, h: INTEGER;
  BEGIN h := 0; i := 0;
    WHILE (i < LEN(s)) & (s[i] # 0X) DO h := h + (i+1)*ORD(s[i]); INC(i) END;
    RETURN h MOD 255 + 1
  END tagOf;

  (*the next word of the command parameters, read character by character:
    Texts.Scan would end a name at a hyphen. FALSE when the word does not fit*)
  PROCEDURE word(VAR R: Texts.Reader; VAR s: ARRAY OF CHAR): BOOLEAN;
    VAR ch: CHAR; i: INTEGER; fits: BOOLEAN;
  BEGIN Texts.Read(R, ch); fits := TRUE;
    WHILE ~R.eot & ((ch = " ") OR (ch = 9X)) DO Texts.Read(R, ch) END;
    i := 0;
    WHILE ~R.eot & (ch > " ") & (ch # "~") DO
      IF i < LEN(s)-1 THEN s[i] := ch; INC(i) ELSE fits := FALSE END;
      Texts.Read(R, ch)
    END;
    s[i] := 0X;
    RETURN fits
  END word;

  PROCEDURE hex(ch: CHAR): INTEGER;
    VAR d: INTEGER;
  BEGIN
    IF (ch >= "0") & (ch <= "9") THEN d := ORD(ch) - ORD("0")
    ELSIF (ch >= "a") & (ch <= "f") THEN d := ORD(ch) - ORD("a") + 10
    ELSIF (ch >= "A") & (ch <= "F") THEN d := ORD(ch) - ORD("A") + 10
    ELSE d := -1
    END;
    RETURN d
  END hex;

  (*the cluster and its key from the parameters: "kube" and zeros when left out.
    The key is up to 16 hex digits, read as bytes in order, the first byte the
    lowest of k0: the same bytes as bytes.fromhex in Python*)
  PROCEDURE cluster(VAR R: Texts.Reader; VAR name: ARRAY OF CHAR): BOOLEAN;
    VAR k: ARRAY 17 OF CHAR; i, d, b: INTEGER; ok: BOOLEAN;
  BEGIN ok := word(R, name);
    IF name[0] = 0X THEN name := "kube" END;
    tag := tagOf(name); k0 := 0; k1 := 0;
    IF ~word(R, k) THEN ok := FALSE END;
    i := 0;
    WHILE ok & (k[i] # 0X) DO
      d := hex(k[i]);
      IF d < 0 THEN ok := FALSE
      ELSE b := i DIV 2;
        IF ODD(i) THEN d := LSL(d, 8*(b MOD 4)) ELSE d := LSL(d, 8*(b MOD 4) + 4) END;
        IF b < 4 THEN k0 := k0 + d ELSE k1 := k1 + d END
      END;
      INC(i)
    END;
    RETURN ok
  END cluster;

  PROCEDURE err(s: ARRAY OF CHAR);
  BEGIN Texts.WriteString(W, "kubenet: "); Texts.WriteString(W, s); Texts.WriteLn(W);
    Texts.Append(Oberon.Log, W.buf)
  END err;

  PROCEDURE Serve*;
    VAR R: Texts.Reader; cl: ARRAY 9 OF CHAR;
  BEGIN Texts.OpenReader(R, Oberon.Par.text, Oberon.Par.pos);
    IF cluster(R, cl) THEN
      start(1); Kube.SetCapacity(maxIds); Kube.Listening(Kernel.Time());
      Texts.WriteString(W, "kubenet: control plane of "); Texts.WriteString(W, cl);
      Texts.WriteString(W, " on the air"); Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
    ELSE err("the cluster name is up to 8 characters, the key up to 16 hex digits")
    END
  END Serve;

  PROCEDURE Join*;
    VAR R: Texts.Reader; cl: ARRAY 9 OF CHAR;
  BEGIN Texts.OpenReader(R, Oberon.Par.text, Oberon.Par.pos);
    IF ~word(R, me) OR (me[0] = 0X) THEN err("a node name of up to 6 characters is needed")
    ELSIF ~cluster(R, cl) THEN err("the cluster name is up to 8 characters, the key up to 16 hex digits")
    ELSE
      nrun := 0; start(2);
      Texts.WriteString(W, "kubenet: node "); Texts.WriteString(W, me);
      Texts.WriteString(W, " of "); Texts.WriteString(W, cl);
      Texts.WriteString(W, " joined the air"); Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
    END
  END Join;

  PROCEDURE Stop*;
  BEGIN
    IF role # 0 THEN Oberon.Remove(task); role := 0;
      Texts.WriteString(W, "kubenet: stopped"); Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
    END
  END Stop;

BEGIN Texts.OpenWriter(W); role := 0; nrun := 0; npeers := 0; tag := tagOf("kube"); k0 := 0; k1 := 0
END KubeNet.
