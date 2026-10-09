# 02 · Disassembly & C decompilation

## 1. Static disassembly

The executable was disassembled over its full range (segments `1000` through `7873`,
offsets `0`–`0xC27F`) to `disassembly/UW2_disassembly.txt` (~282 k lines). A typical
line looks like:

```
00000002  b8044a        mov ax,0x4a
00000005  8bc8          mov cx,ax
00000007  e81200        call 0x1c
0000000a  3b06044a      cmp ax,[0x4a04]
0000000e  740d          jz 0x1d
```

This listing is the ground truth used both for the C-level understanding and for the
byte-exact reconstruction in `03-reconstruction-and-build.md`.

## 2. C decompilation (Ghidra)

Ghidra 12.1.4 produced a C decompilation of the image: **343 functions**, with
symbolic names, parameters, control flow and cross-function calls.
`c/UW2_decompiled.c` is that decompilation (16,690 lines). Its header:

```c
/* ===========================================================
   Ghidra 12.1.4 decompilation of UW2.EXE
   Ultima Underworld II - Labyrinth of Worlds (c)1993 Looking Glass
   =========================================================== */
```

A representative function (function table entry allocation, near the start of the
image):

```c
// ---- @1000:0002  FUN_1000_0002 ----
uint __cdecl16far FUN_1000_0002(int param_1)
{
  int iVar1;
  uint *puVar2;

  puVar2 = (uint *)0x0;
  do {
    if ((*puVar2 & 1) == 0) {
      *puVar2 = 5;
      if (DAT_470d_0dc5 != '\0') {
        *puVar2 = *puVar2 | 0x10;
      }
      *(int *)((int)puVar2 + 9) = param_1;
      if (param_1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_104e_005a();
        if (iVar1 == 0) {
          return 0xffff;
        }
      }
      *(int *)((int)puVar2 + 0xd) = iVar1;
      *(undefined1 *)(puVar2 + 4) = 0;
      return (uint)puVar2 >> 4;
    }
    puVar2 = puVar2 + 8;
  } while (puVar2 < (uint *)&DAT_75e9_0400);
  return 0xffff;
}
```

### Reading the C

Ghidra decompiles from the *entry-point-reachable* function set, so it shows the
**semantic structure** — the data structures (function-pointer tables, string
tables, EMS buffers), the control flow, and which functions call which. This is the
human-readable "what does it do" layer. It is deliberately **not** a compilable,
complete C port of the game: the image is a flat monolithic 16-bit program whose
exact bytes (segment placement, absolute relocations, EMS page management) carry
meaning that plain C cannot express. The C here is a faithful *decompilation*, used
for understanding; the byte-exact `asm/` tree is what actually rebuilds the game.

## 3. Function coverage

A custom tool (`cov4.py`) measures how many of the original's distinct function
bodies are present in a candidate EXE:

```
$ cov4.py ORIG_UW2.EXE bin/UW2.EXE
RAW exact:  806/806 distinct (100%),  812/812 instances (100%)
MASKED:     741/741 distinct (100%),  812/812 instances (100%)
```

- **RAW exact** compares bodies byte-for-byte (immediate operands included).
- **MASKED** masks immediates, so two bodies that differ only in an embedded
  absolute address (e.g. a relocated far call) still count as the same function.

The original contains **806 distinct function bodies / 812 instances**. The
byte-identical `bin/UW2.EXE` reproduces all of them; the
`bin/UW2_original_toolchain_stub.EXE` also reproduces all 806/806 (100%).

## 4. Launcher behaviour (the observable surface)

The startup / launcher code — what actually runs first and what the user sees
without the data pack — is reproduced in `c/UW2_c_launcher.c`. Observed original
behaviour, reproduced exactly:

```
EMS allocated
Cannot run Underworld.
Could not read data. Error code D001
```

and, with the data present, a normal boot into the splash/title. This is the
"launcher" the original-toolchain build compiles (see
`03-reconstruction-and-build.md`).
