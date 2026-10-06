MODULE KubeNet;  (*Kube over Wirth's radio: a control plane and kubelets on separate machines.
  Every message is one radio sub-packet (SCC: 8 header bytes, 24 data bytes) and
  goes to everybody (dadr 0FFH). Messages of several sub-packets are avoided on
  purpose: the radio has no collision avoidance, and two stations sending at once
  would interleave their sub-packets at the receivers.

    heartbeat  kubelet -> all   typ 60H  [node name, 8 bytes][n][n pod ids]
    assign     plane   -> all   typ 61H  [node name, 8 bytes][n][n pod ids]

  A kubelet sends a heartbeat every second with the pods it runs. The control
  plane takes a heartbeat as "the node is Ready and runs these pods", sends each
  Ready node the pods bound to it every second, and marks a node NotReady when it
  has been silent for three seconds; Kube's scheduler then moves its pods.
  The kubelet runs exactly what the last assignment said: level-triggered, like
  the real one. A lost message is repaired by the next one.

  Commands:
    KubeNet.Serve        on the control plane, next to Kube.Start
    KubeNet.Join name    on a node; the name is up to 8 characters
    KubeNet.Stop         either side*)

  IMPORT SCC, Kernel, Texts, Oberon, Kube;

  CONST
    tBeat = 60H; tAssign = 61H;
    nameLen = 8; maxIds = 15;     (*8 + 1 + 15 = 24 data bytes*)
    period = 100;                 (*ms between ticks of the task*)
    beat = 1000; ttl = 3000;      (*ms*)

  TYPE Ids = ARRAY maxIds OF BYTE;

  VAR
    W: Texts.Writer;
    task: Oberon.Task;
    role: INTEGER;                (*0 none, 1 control plane, 2 node*)
    me: ARRAY nameLen+1 OF CHAR;
    run: Ids; nrun: INTEGER;      (*what this node runs*)
    last: INTEGER;                (*time of the last heartbeat or assignment round*)

  PROCEDURE send(typ: INTEGER; name: ARRAY OF CHAR; ids: Ids; n: INTEGER);
    VAR head: SCC.Header; buf: ARRAY nameLen+1+maxIds OF BYTE; i: INTEGER;
  BEGIN
    FOR i := 0 TO nameLen-1 DO buf[i] := 0 END;
    i := 0; WHILE (i < nameLen) & (i < LEN(name)) & (name[i] # 0X) DO buf[i] := ORD(name[i]); INC(i) END;
    buf[nameLen] := n;
    FOR i := 0 TO n-1 DO buf[nameLen+1+i] := ids[i] END;
    head.dadr := 0FFH; head.typ := typ; head.len := nameLen+1+n;
    SCC.SendPacket(head, buf)
  END send;

  (*the body of a message, already received by SCC.ReceiveHead*)
  PROCEDURE read(len: INTEGER; VAR name: ARRAY OF CHAR; VAR ids: Ids; VAR n: INTEGER);
    VAR i: INTEGER; b: BYTE;
  BEGIN
    FOR i := 0 TO nameLen-1 DO SCC.Receive(b); name[i] := CHR(b) END;
    name[nameLen] := 0X;
    SCC.Receive(b); n := b; IF n > maxIds THEN n := maxIds END;
    FOR i := 0 TO n-1 DO SCC.Receive(ids[i]) END;
    SCC.Skip(len - nameLen - 1 - n)
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
    VAR head: SCC.Header; name: ARRAY nameLen+1 OF CHAR; node: Kube.Name;
      ids: Ids; n, i, now: INTEGER;
  BEGIN now := Kernel.Time();
    REPEAT SCC.ReceiveHead(head);
      IF head.valid THEN
        IF (head.typ = tBeat) & (head.len >= nameLen+1) THEN
          read(head.len, name, ids, n); Kube.NodeSeen(name, now); Kube.Report(name, ids, n)
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
    VAR head: SCC.Header; name: ARRAY nameLen+1 OF CHAR; ids: Ids; n, now: INTEGER;
  BEGIN now := Kernel.Time();
    REPEAT SCC.ReceiveHead(head);
      IF head.valid THEN
        IF (head.typ = tAssign) & (head.len >= nameLen+1) THEN
          read(head.len, name, ids, n);
          IF (name = me) & ~same(ids, n, run, nrun) THEN
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
    role := r; last := 0; SCC.Start(FALSE);    (*no address filter: everything is broadcast*)
    IF r = 1 THEN task := Oberon.NewTask(planeTick, period) ELSE task := Oberon.NewTask(nodeTick, period) END;
    Oberon.Install(task)
  END start;

  PROCEDURE Serve*;
  BEGIN start(1); Kube.Listening(Kernel.Time());
    Texts.WriteString(W, "kubenet: control plane on the air"); Texts.WriteLn(W);
    Texts.Append(Oberon.Log, W.buf)
  END Serve;

  (*the name is read character by character: Texts.Scan would end it at a hyphen*)
  PROCEDURE Join*;
    VAR R: Texts.Reader; ch: CHAR; i: INTEGER;
  BEGIN Texts.OpenReader(R, Oberon.Par.text, Oberon.Par.pos); Texts.Read(R, ch);
    WHILE ~R.eot & ((ch = " ") OR (ch = 9X)) DO Texts.Read(R, ch) END;
    i := 0;
    WHILE ~R.eot & (ch > " ") & (ch # "~") & (i < nameLen) DO me[i] := ch; INC(i); Texts.Read(R, ch) END;
    IF i > 0 THEN
      WHILE i <= nameLen DO me[i] := 0X; INC(i) END;
      nrun := 0; start(2);
      Texts.WriteString(W, "kubenet: node "); Texts.WriteString(W, me);
      Texts.WriteString(W, " joined the air"); Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
    END
  END Join;

  PROCEDURE Stop*;
  BEGIN
    IF role # 0 THEN Oberon.Remove(task); role := 0;
      Texts.WriteString(W, "kubenet: stopped"); Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
    END
  END Stop;

BEGIN Texts.OpenWriter(W); role := 0; nrun := 0
END KubeNet.
