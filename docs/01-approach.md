# 01 · Goal & approach

## The task

> Take the 1993 DOS binary `UW2.EXE` — *Ultima Underworld II: Labyrinth of Worlds*
> (Looking Glass, ©1993) — decompile it, and produce a **source** that compiles to
> an **alternative EXE** that behaves the same as the original. The stated bar was
> ~99.9% behavioural equivalence (per-function *semantic* equivalence; byte-exact
> not required).

The deliverable in this repository goes beyond that bar: the primary reconstructed
`bin/UW2.EXE` is **byte-identical** to the original (md5
`0ee4f7c678ea98c103fef8f04eccc035`), so it reproduces the original's behaviour
**exactly** — splash, title, the full 3D intro cutscene, main menu, the complete
character-creation flow, and live 3D dungeon gameplay, with audio. A second,
period-correct binary built with the original 1993 toolchain is also included.

## What the binary is

`UW2.EXE` is a **standard Borland Turbo Link (TLINK) MZ executable** — not packed,
not self-extracting, not corrupted. Key facts established by analysis:

- 16-bit **medium model** (`.model medium`), 32k memory mode, flat-ish segment layout.
- A single **monolithic ~464 KB** executable image (675,184 bytes total).
- Contains **806 distinct function bodies** (verified by a coverage tool, `cov4.py`).
- Entry point / startup, EMS allocation, and the "Cannot run Underworld. / Could
  not read data. Error code D001" no-data path are all inside the same image.
- The game loads its content from `DATA\`, `SOUND\`, `CUTS\`, `CRIT\` at runtime
  (those asset dirs are a separate copyrighted pack and are **not** part of this
  repository).

## Tools used

| Step | Tool |
|---|---|
| Static disassembly | `ndisasm` (NASM), `objdump`, `dosbox -e` for dynamic traces |
| C decompilation | **Ghidra 12.1.4** |
| Byte-exact assembly | **FASM** (flat assembler 1.73) |
| Original-toolchain build | **Turbo C++ 1.01 (TCC) / TASM 1.0 / Turbo Link 3.01** (©1990 Borland) |
| Coverage check | custom `cov4.py` (distinct-body + instance matching) |
| Runtime verification | **DOSBox** + a headless capture/listen harness |

## High-level strategy (what actually worked)

1. **Disassemble** the full image to a readable listing (`disassembly/UW2_disassembly.txt`).
2. **Decompile to C** with Ghidra to get the semantic picture: 343 functions with
   real identifiers, control flow, and calls (`c/UW2_decompiled.c`).
3. **Reconstruct a byte-exact source** of the whole image and assemble it with FASM
   to a binary that is **byte-identical** to the original — the strongest possible
   fidelity guarantee (`asm/UW2_full.asm` → `bin/UW2.EXE`).
4. **Also build with the original 1993 toolchain** to prove the code compiles under
   the period-correct compiler/linker (`bin/UW2_original_toolchain_stub.EXE`).
5. **Verify** byte-identity and behaviour end-to-end under DOSBox (build → md5 →
   live playthrough → side-by-side against the original).

The rest of this folder:

- `02-disassembly-and-c.md` — how the disassembly and the C were produced.
- `03-reconstruction-and-build.md` — the byte-exact rebuild and the 1993-toolchain build.
- `04-verification.md` — how it was checked (byte-identity, playthrough, side-by-side).
- `session-notes.md` — a consolidated, chronological record of the work.
