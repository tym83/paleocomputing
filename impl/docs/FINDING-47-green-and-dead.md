[Русская версия](FINDING-47-green-and-dead.ru.md)

# Finding 47. Everything is green, and nothing works

In one session I fell into the same trap **six times**. Each time it looked
different, and each time I fixed the particular case without noticing what they
had in common. I am writing down the common part, because it is more useful
than six fixes.

## Six cases

| what was checked | what answered | what was actually the case |
|---|---|---|
| catalog built | artifact valid | the source manifest did not get inside |
| application deployed | release succeeded | the schema rejected the values, there was no pod |
| page served | `HTTP 200, 12019 bytes` | the image did not contain the machine |
| build passed | green | it copied what was not there |
| catalog updated | "created 4 artifacts" | there are five components |
| application installed | resource created | the volume is empty, the machine has nothing to load |

None of these answers was a lie. It is just that **each one answered a
different question**.

## What its nature is

The check looks at **the shape of the response**: exit code, size, status, the
fact of existence. What we need to know is **whether the thing does its job**.

The entire difference between "deployed" and "works" fits between these two
questions. And it grows with the length of the chain: ours has six links
(repository, build, registry, catalog, platform, machine), and at every boundary
the answer is replaced by its shape.

The second circumstance common to all six: **the check ran where the conditions
had already been prepared by a previous run**. The files are left over from last
time; the catalog is in the catalog; the volume is filled. On the clean side (in
the build, in someone else's cluster, for a person arriving for the first time)
none of this exists.

## What follows in practice

**Ask the thing about its work, not about its existence.**

* not "the image built" but "the image contains something to work with": go
  inside and look;
* not "the page is served" but "the machine boots on it";
* not "N artifacts created" but "N matches the number of components";
* not "the application is installed" but "it does what it was installed for".

**Check on a clean environment.** Anything checked on a machine that still
carries traces of previous runs is not checked. Build from scratch, an empty
cluster, a fresh clone.

**A check must be able to fail.** I verify every new check by mutation: I break
what it guards and make sure it turns red. Without this step a check is
decoration.

## Why this deserves a separate note

Six times is neither a coincidence nor inattention. It is a property of the way
of working: the chain is long, every boundary offers a quick answer, and the
temptation to take it for the real one is strongest exactly when you are tired
and want things to add up.

Hence the rule I derive for myself: **the more you want it to work, the more
directly you have to ask**.
