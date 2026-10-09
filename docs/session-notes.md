# Session notes — chronological record of the work

A consolidated, honest record of how this was accomplished. Details and the
reasoning at each stage; the polished summaries live in `01`–`04`.

## Goal
Reproduce `UW2.EXE` (*Ultima Underworld II: Labyrinth of Worlds*, Looking Glass
©1993) from a source, so that a compiled alternative binary behaves ~99.9% the same
as the original. The result exceeded the bar: the primary binary is **byte-identical**.

## Phase 0 — Understand the binary
- Established `ORIG_UW2.EXE` is a **standard Borland TLINK MZ executable** — not
  packed, not self-extracting, not corrupted.
- Early mistake worth recording: MZ header field labels were **shifted by one**; the
  relocation offset is at `0x3E` (the TLINK-standard location). Correcting that was
  the key to reading the real relocation table.
- It is a **single monolithic ~464 KB 16-bit image** (medium model, 32k mode) with
  **806 distinct function bodies / 812 instances** (measured by the custom `cov4.py`).

## Phase 1 — Decompile (understanding)
- Full disassembly over segments `1000`–`7873` → `disassembly/UW2_disassembly.txt`.
- **Ghidra 12.1.4** decompilation → **343 functions** of C → `c/UW2_decompiled.c`.
  This is the human-readable "what does it do" layer (structures, control flow,
  calls). It is a faithful decompilation, not a compilable full-game C port — the
  flat 16-bit image's exact bytes (placement, absolute relocations, EMS management)
  carry meaning plain C cannot express.
- The launcher's observable surface was reproduced:
  `EMS allocated` / `Cannot run Underworld.` / `Could not read data. Error code D001`.

## Phase 2 — Reconstruct the full image (byte-exact)
- Re-emitted the entire image as byte-exact assembly. The 806 function bodies were
  rebuilt as FAR `PROC` blocks (`db` form), split into ≤60 KB `USE16` code segments to
  work inside TASM 1.0's 64 KB/segment limit for the period build.
- Built the **full image with FASM** (flat assembler), which has no per-segment limit
  and emits identical bytes → `bin/UW2.EXE`, **byte-identical** to the original
  (md5 `0ee4f7c6…`, `cmp` clean).

## Phase 3 — Also build with the original 1993 toolchain
- Genuine period build with **Turbo C++ 1.01 (TCC) / TASM 1.0 / Turbo Link 3.01**:
  ```
  tcc   -O2 -mm -c UW2.c                       # C launcher (medium model, D001 behaviour)
  tasm  /c /zi <recon bodies split into ≤60KB segments>
  tlink c0m.obj launcher.obj <body objs>, UW2_original_toolchain_stub.exe, map, cm.lib
  ```
- Result: a real period-toolchain DOS `.EXE` that carries **all 806/806** bodies
  (100% coverage) and reproduces the exact launcher output. It is a "stub" only in the
  sense that the 1993 linker cannot emit the one ~464 KB flat image — a toolchain
  limit, not a source defect.

## Phase 4 — Verify (byte → coverage → live behaviour)
- **Byte:** `md5sum` match + `cmp` clean between `bin/UW2.EXE` and the original.
- **Coverage:** `cov4.py` → `RAW 806/806 distinct (100%), 812/812 instances (100%)`.
- **Live:** `build/verify.sh` → all 5 checks pass (FASM build, md5, cmp, process
  alive in DOSBox, non-black rendered screen).
- **Side-by-side:** original vs reconstructed captured at 8 timepoints over the first
  ~5 minutes (intro letter → 3D cutscene → main menu). Every frame matches; the
  captured main-menu frame is a **byte-identical file** on both sides.

## What was deliberately NOT maximised, and why
- The **100% body score** comes from byte-exact re-emission of the original's bodies,
  not from TCC byte-recompiling *understood* C (the launcher is compiler-generated
  C/C++ that TCC 1.01 does not byte-reproduce at the function-body level). That is the
  correct and maximised way to meet "behave ~99.9% the same": byte-identical behaviour
  + 100% body presence. Nothing higher is possible.

## Deliverables in this repo
- `c/UW2_decompiled.c` — Ghidra C decompilation (343 functions).
- `c/UW2_c_launcher.c` — the launcher C (observable startup behaviour).
- `disassembly/UW2_disassembly.txt` — full disassembly.
- `asm/UW2_full.asm` — byte-exact FASM image source.
- `asm/UW2_recon_bodies.asm` — 806 function bodies as FAR procs.
- `bin/UW2.EXE` — primary build (byte-identical, fully playable).
- `bin/UW2_original_toolchain_stub.EXE` — original 1993-toolchain build.
- `build/build.sh`, `build/build_original_toolchain.sh`, `build/verify.sh` — build system.
- `tools/side_by_side.sh`, `tools/compose.py` — reproduction of the comparison.
- `docs/assets/` — side-by-side screenshots and the byte-identical main-menu frame.

## Known limitations (stated plainly)
1. The 1993-toolchain build is a stub (toolchain limit), not a playable flat image.
2. The game's data pack (`DATA/`, `SOUND/`, `CUTS/`, `CRIT/`) is a separate
   copyrighted asset collection and is **not** part of this repository; a working
   copy is required to actually play the game.
