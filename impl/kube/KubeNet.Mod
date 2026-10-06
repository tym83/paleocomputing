MODULE KubeNet;  (*Kube over Wirth's radio: a control plane and kubelets on separate machines.
  Every message is one radio sub-packet (SCC: 8 header bytes, 24 data bytes) and
  goes to everybody (dadr 0FFH). Messages of several sub-packets are avoided on
  purpose: the radio has no collision avoidance, and two stations sending at once
  would interleave their sub-packets at the receivers.

    heartbeat  kubelet -> all   typ 60H  [cluster][node name, 8 bytes][n][n pod ids]
    assign     plane   -> all   typ 61H  [cluster][node name, 8 bytes][n][n pod ids]

  The first byte tags the cluster: one air can carry several clusters, and a
  node must not obey another cluster's control plane that has a node of the
  same name. The tag is computed from the cluster name, (sum of (i+1)*ORD(c[i]))
  MOD 255 + 1, so two different names share a tag with a chance of 1 in 255.

  A kubelet sends a heartbeat every second with the pods it runs. The control
  plane takes a heartbeat as "the node is Ready and runs these pods", sends each
  Ready node the pods bound to it every second, and marks a node NotReady when it
  has been silent for five seconds; Kube's scheduler then moves its pods.
  The kubelet runs exactly what the last assignment said: level-triggered, like
  the real one. A lost message is repaired by the next one.

  Commands:
    KubeNet.Serve [cluster]        on the control plane, next to Kube.Start
    KubeNet.Join name [cluster]    on a node; the name is up to 8 characters
    KubeNet.Stop                   either side
  The cluster name is up to 8 characters, "kube" when left out.*)

  IMPORT SCC, Kernel, Texts, Oberon, Kube;

  CONST
    tBeat = 60H; tAssign = 61H;
    nameLen = 8; maxIds = 14;     (*1 + 8 + 1 + 14 = 24 data bytes*)
    hdr = 1 + nameLen + 1;        (*cluster, name, count*)
    period = 100;                 (*ms between ticks of the task*)
    beat = 1000; ttl = 5000;      (*ms: five missed heartbeats; three moved pods on a lossy air*)

  TYPE Ids = ARRAY maxIds OF BYTE;

  VAR
    W: Texts.Writer;
    task: Oberon.Task;
    role: INTEGER;                (*0 none, 1 control plane, 2 node*)
    me: ARRAY nameLen+1 OF CHAR;
    run: Ids; nrun: INTEGER;      (*what this node runs*)
    tag: INTEGER;                 (*this cluster*)
    last: INTEGER;                (*time of the last heartbeat or assignment round*)

  PROCEDURE send(typ: INTEGER; name: ARRAY OF CHAR; ids: Ids; n: INTEGER);
    VAR head: SCC.Header; buf: ARRAY hdr+maxIds OF BYTE; i: INTEGER;
  BEGIN buf[0] := tag;
    FOR i := 1 TO nameLen DO buf[i] := 0 END;
    i := 0; WHILE (i < nameLen) & (i < LEN(name)) & (name[i] # 0X) DO buf[1+i] := ORD(name[i]); INC(i) END;
    buf[1+nameLen] := n;
    FOR i := 0 TO n-1 DO buf[hdr+i] := ids[i] END;
    head.dadr := 0FFH; head.typ := typ; head.len := hdr+n;
    SCC.SendPacket(head, buf)
  END send;

  (*the body of a message, already received by SCC.ReceiveHead; FALSE, and
    the message skipped, when it belongs to another cluster*)
  PROCEDURE read(len: INTEGER; VAR name: ARRAY OF CHAR; VAR ids: Ids; VAR n: INTEGER): BOOLEAN;
    VAR i: INTEGER; b: BYTE; ours: BOOLEAN;
  BEGIN SCC.Receive(b); ours := b = tag;
    IF ours THEN
      FOR i := 0 TO nameLen-1 DO SCC.Receive(b); name[i] := CHR(b) END;
      name[nameLen] := 0X;
      SCC.Receive(b); n := b; IF n > maxIds THEN n := maxIds END;
      FOR i := 0 TO n-1 DO SCC.Receive(ids[i]) END;
      SCC.Skip(len - hdr - n)
    ELSE SCC.Skip(len - 1)
    END;
    RETURN ours
  END read;

  (*the cluster tag of a name: (sum of (i+1)*ORD(c[i])) MOD 255 + 1*)
  PROCEDURE tagOf(s: ARRAY OF CHAR): INTEGER;
    VAR i, h: INTEGER;
  BEGIN h := 0; i := 0;
    WHILE (i < LEN(s)) & (s[i] # 0X) DO h := h + (i+1)*ORD(s[i]); INC(i) END;
    RETURN h MOD 255 + 1
  END tagOf;

  (*the next word of the command parameters, read character by character:
    Texts.Scan would end a name at a hyphen*)
  PROCEDURE word(VAR R: Texts.Reader; VAR s: ARRAY OF CHAR);
    VAR ch: CHAR; i: INTEGER;
  BEGIN Texts.Read(R, ch);
    WHILE ~R.eot & ((ch = " ") OR (ch = 9X)) DO Texts.Read(R, ch) END;
    i := 0;
    WHILE ~R.eot & (ch > " ") & (ch # "~") & (i < LEN(s)-1) DO s[i] := ch; INC(i); Texts.Read(R, ch) END;
    s[i] := 0X
  END word;

  (*the cluster named in the parameters, "kube" when left out*)
  PROCEDURE cluster(VAR R: Texts.Reader; VAR name: ARRAY OF CHAR);
  BEGIN word(R, name);
    IF name[0] = 0X THEN name := "kube" END;
    tag := tagOf(name)
  END cluster;

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
        IF (head.typ = tBeat) & (head.len >= hdr) THEN
          IF read(head.len, name, ids, n) THEN Kube.NodeSeen(name, now); Kube.Report(name, ids, n) END
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
        IF (head.typ = tAssign) & (head.len >= hdr) THEN
          IF read(head.len, name, ids, n) & (name = me) & ~same(ids, n, run, nrun) THEN
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
    VAR R: Texts.Reader; cl: ARRAY nameLen+1 OF CHAR;
  BEGIN Texts.OpenReader(R, Oberon.Par.text, Oberon.Par.pos); cluster(R, cl);
    start(1); Kube.Listening(Kernel.Time());
    Texts.WriteString(W, "kubenet: control plane of "); Texts.WriteString(W, cl);
    Texts.WriteString(W, " on the air"); Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
  END Serve;

  PROCEDURE Join*;
    VAR R: Texts.Reader; cl: ARRAY nameLen+1 OF CHAR;
  BEGIN Texts.OpenReader(R, Oberon.Par.text, Oberon.Par.pos); word(R, me);
    IF me[0] # 0X THEN cluster(R, cl);
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

BEGIN Texts.OpenWriter(W); role := 0; nrun := 0; tag := tagOf("kube")
END KubeNet.
