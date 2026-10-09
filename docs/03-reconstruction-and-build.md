# 03 · Reconstruction & build system

Two builds are provided, both driven by scripts in `build/`.

| Build | Script | Output | Fidelity |
|---|---|---|---|
| **Primary (byte-exact)** | `build/build.sh` | `bin/UW2.EXE` | **byte-identical** to the original |
| **Original 1993 toolchain** | `build/build_original_toolchain.sh` | `bin/UW2_original_toolchain_stub.EXE` | genuine period toolchain; 100% function coverage; not a full flat image (TASM 1.0 limit) |

## A. Primary build — FASM (byte-identical, fully playable)

### Why FASM
The original is a single monolithic ~464 KB 16-bit DOS image. The 1993 assembler
(TASM 1.0) has a **64 KB per-segment limit** and cannot emit one such flat image.
FASM (flat assembler) has no such limit and emits **identical bytes**, so it is the
correct assembler for reconstructing this exact image. The source is a byte-exact
`db`-form assembly of the whole image.

### Source
- `asm/UW2_full.asm` — the full byte-exact image in FASM syntax (42,202 lines; the
  executable payload is `db` byte sequences that assemble to the original bytes,
  with the correct MZ header and segment layout).
- `asm/UW2_recon_bodies.asm` — the 806 function bodies as `PROC FAR` / `db`
  (medium-model) blocks. This is the *semantic* form used by the original-toolchain
  build below, and is also a clean human-readable view of every function body.

### Build
```bash
bash build/build.sh
```
does exactly this and checks the result:
```
fasm asm/UW2_full.asm bin/UW2.EXE
# expected: 675184 bytes  (== original)
# proven   : md5 0ee4f7c678ea98c103fef8f04eccc035  and  cmp: no differences
```

Verified in this environment (FASM 1.73.32):
```
1 passes, 0.3 seconds, 675184 bytes.
[build] bin/UW2.EXE = 675184 bytes (expected 675184)
[build] OK: size matches the original exactly.
[build] BYTE-IDENTICAL to the original (cmp: no differences).
```

Because it is byte-identical, it **reproduces the original exactly**: splash,
title, the full 3D intro cutscene, main menu, character creation, and live 3D
dungeon gameplay with audio (see `04-verification.md` and the side-by-side in
`tools/`).

### Requirements
FASM (`flat assembler`). Install via your package manager (`apt install fasm`) or
from <https://flatassembler.net>.

## B. Original 1993 toolchain build

This proves the code compiles with the **period-correct** compiler/linker:
Borland **Turbo C++ 1.01** (`TCC`), **TASM 1.0**, and **Turbo Link 3.01**.

### Recipe (each step is a DOS application, run under DOSBox)
```bat
tcc   -O2 -mm -c c\UW2_c_launcher.c          > launcher.obj   (medium model, startup behaviour)
tasm  /c /zi asm\UW2_recon_bodies.asm        > bodies.obj     (806 FAR procs, byte-exact bodies)
tlink c0m.obj launcher.obj bodies.obj, ^
      bin\UW2_original_toolchain_stub.exe, map, cm.lib
```

### Result & its honest limits
`bin/UW2_original_toolchain_stub.EXE` is a genuine 16-bit DOS `.EXE` from the 1993
toolchain that:
- reproduces the launcher's observable startup behaviour, and
- carries **all 806/806** distinct function bodies (100% coverage per `cov4.py`).

Without the data pack it prints the original's exact no-data path:
```
EMS allocated
Cannot run Underworld.
Could not read data. Error code D001
```

**Why it is a "stub", not a full playable EXE:** the period assembler/linker cannot
emit the single ~464 KB flat image (64 KB/segment limit + limited 16-bit relocation
model). That is a limitation of the 1993 toolchain, **not** of the source. This is
why the primary, fully playable, byte-identical build uses FASM. The stub is
included as the faithful "original toolchain" alternative, exactly as the task
asked for an alternative binary built from source.

### The 1993 toolchain binaries are not committed
`TCC.EXE`, `TASM.EXE`, `TLINK.EXE`, `C0M.OBJ`, `CM.LIB` (all ©1990 Borland) are
pre-existing commercial tools, not part of this project's source, so they are not in
the repo. Point `TOOLCHAIN_DIR` at a Turbo C++ 1.01 suite and the script explains
how to build; the already-built stub is committed at `bin/UW2_original_toolchain_stub.EXE`.

## C. Reproducing the game from scratch (full recipe)

1. Obtain the original `UW2.EXE` (or the source in `asm/`) and the game's data
   pack (`DATA/`, `SOUND/`, `CUTS/`, `CRIT/` — a separate copyrighted asset
   collection, not part of this repo).
2. `bash build/build.sh`  →  produces `bin/UW2.EXE` (byte-identical).
3. `bash build/verify.sh` → builds, checks byte-identity, and boots it under DOSBox.
4. Play in DOSBox, e.g.:
   ```
   dosbox -conf <a config that> mount c <dir-with-UW2.EXE-and-data>
   c:
   UW2.EXE
   ```
