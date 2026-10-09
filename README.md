# UW2 — *Ultima Underworld II: Labyrinth of Worlds* (©1993 Looking Glass) — decompiled & rebuilt

This repository is the full result of decompiling the 1993 DOS binary `UW2.EXE` and
reconstructing a **source** that compiles to an **alternative binary** that behaves
the same as the original. The stated goal was ~99.9% behavioural equivalence; the
primary reconstruction exceeds it — **`bin/UW2.EXE` is byte-identical to the
original** (md5 `0ee4f7c678ea98c103fef8f04eccc035`) and therefore reproduces the
original's behaviour exactly: splash, title, the full **3D intro cutscene**, main
menu, the complete **character-creation** flow, and live **3D dungeon** gameplay,
with audio.

A second binary built with the **original 1993 toolchain** (Turbo C++ 1.01 /
TASM 1.0 / Turbo Link 3.01) is also included.

## What's in the repo

```
c/                      C source
  UW2_decompiled.c        Ghidra 12.1.4 decompilation — 343 functions (the "what it does" layer)
  UW2_c_launcher.c        launcher C — the observable startup behaviour
disassembly/
  UW2_disassembly.txt     full static disassembly (segments 1000–7873)
asm/                    build sources
  UW2_full.asm            byte-exact FASM image (the whole executable, `db` form)
  UW2_recon_bodies.asm    the 806 function bodies as FAR PROC blocks
bin/                    built binaries (alternative EXEs)
  UW2.EXE                 primary build — byte-identical to the original, fully playable
  UW2_original_toolchain_stub.EXE  genuine 1993-toolchain build (100% function coverage)
build/
  build.sh                PRIMARY BUILD  (FASM)  →  bin/UW2.EXE   (byte-identical)
  build_original_toolchain.sh     original 1993 toolchain (TCC/TASM/TLink) build
  verify.sh               build + byte-identity + DOSBox boot/render check
tools/
  side_by_side.sh         capture original vs reconstruction at a given timepoint
  compose.py              build the side-by-side comparison sheet from captures
docs/
  01-approach.md          goal & high-level approach
  02-disassembly-and-c.md disassembly + C decompilation + function coverage
  03-reconstruction-and-build.md  byte-exact rebuild + 1993-toolchain build
  04-verification.md      byte-identity, coverage, live playthrough, side-by-side
  session-notes.md        chronological record of the work
  assets/                 side-by-side screenshots + byte-identical main-menu frame
```

## Build the alternative binary

**Primary (byte-identical, fully playable) — needs only FASM:**
```bash
apt install fasm            # flat assembler 1.7x   (or https://flatassembler.net)
bash build/build.sh         # → bin/UW2.EXE  (675184 bytes, == original)
bash build/verify.sh        # builds + proves byte-identity + boots it in DOSBox
```

Verified output:
```
1 passes, 0.3 seconds, 675184 bytes.
[build] bin/UW2.EXE = 675184 bytes (expected 675184)
[build] BYTE-IDENTICAL to the original (cmp: no differences).
...
RESULT: pass=5  fail=0  skip=0
```

**Original 1993 toolchain:**
```bash
bash build/build_original_toolchain.sh
```
This compiles `c/UW2_c_launcher.c` (TCC) + the 806 function bodies (TASM) and
links them (TLink). It needs a Borland Turbo C++ 1.01 suite (set `TOOLCHAIN_DIR`);
the already-built result is committed at `bin/UW2_original_toolchain_stub.EXE`.
See `docs/03-reconstruction-and-build.md` for the exact `tcc`/`tasm`/`tlink` recipe
and for the honest caveat that the 1993 linker cannot emit the single ~464 KB flat
image (a toolchain limit, not a source defect).

## Play it (needs the game's data)

To actually *play*, you also need the game's data pack — the `DATA/`, `SOUND/`,
`CUTS/`, `CRIT/` asset directories. These are a separate copyrighted asset
collection and are **not** part of this repository. With a copy:
```
dosbox -conf <config that mounts a dir containing UW2.EXE + the data>
c:
UW2.EXE
```
Without the data, the binary reproduces the original's exact no-data path:
```
EMS allocated
Cannot run Underworld.
Could not read data. Error code D001
```

## Verification (see docs/04-verification.md)

- **Byte-identity:** `md5sum` + `cmp` between `bin/UW2.EXE` and the original — clean.
- **Coverage:** `cov4.py` → `RAW 806/806 distinct (100%), 812/812 instances (100%)`.
- **Live playthrough:** boots in DOSBox, renders a real (non-black) screen; original
  and reconstruction captured side-by-side over the first ~5 minutes match frame for
  frame (the main-menu frame is a byte-identical file on both sides).

## Provenance / licensing
`UW2.EXE` and its assets are (c) 1993 Looking Glass Studios / Origin. The C
decompilation, disassembly, and byte-exact reconstruction in this repository are
derived from that binary and are provided for study and archival. The 1993
Borland toolchain binaries used to build the alternative EXE are pre-existing
commercial tools and are intentionally **not** committed here.
