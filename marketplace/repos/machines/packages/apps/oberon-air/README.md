[Русская версия](README.ru.md)

# OberonAir

Project Oberon connects its stations by radio. Each machine has an nRF24L01+
transceiver on the SPI bus, `SCC.Mod` drives it, and `Net.Mod` builds a small
network protocol on top: a station asks for another by name, then sends it
messages or files, and every packet is acknowledged.

An OberonAir is that radio channel inside a tenant. It runs a relay that hands
every radio frame to all the machines that joined it. A machine joins by naming
the air in its `air` value:

```yaml
apiVersion: apps.cozystack.io/v1alpha1
kind: OberonVM
metadata:
  name: alice
spec:
  air: lab          # an OberonAir called lab in the same tenant
```

Inside the machine nothing is emulated on top of Oberon: Wirth's own `Net`
works unchanged. On one machine run `System.SetUser alice/x` (type the name and
password after starting the command) and `Net.StartServer`; on another run
`Net.StartServer` and `Net.SendMsg alice hello`, and the message appears in
alice's log. `Net.SendFiles` and `Net.ReceiveFiles` move files the same way.

The relay keeps the list of machines it has heard from in memory, so the air
runs as a single replica. Machines announce themselves every few seconds, so a
restarted relay finds them again on its own.
