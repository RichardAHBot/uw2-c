# 04 · Verification

How the reconstruction was checked. Three layers, strongest last: byte-identity,
function coverage, and live behavioural equivalence.

## 1. Byte-identity of the primary build

The FASM build produces a binary identical to the original:

```
$ bash build/build.sh
1 passes, 0.3 seconds, 675184 bytes.
[build] bin/UW2.EXE = 675184 bytes (expected 675184)

$ md5sum bin/UW2.EXE  /root/u2/ORIG_UW2.EXE
0ee4f7c678ea98c103fef8f04eccc035  bin/UW2.EXE
0ee4f7c678ea98c103fef8f04eccc035  /root/u2/ORIG_UW2.EXE

$ cmp bin/UW2.EXE /root/u2/ORIG_UW2.EXE && echo identical
identical
```

Byte-identity is the strongest possible equivalence guarantee: **same bytes ⇒ same
behaviour** on the same machine. Everything below is therefore expected to pass by
construction, but was still checked live.

## 2. Function coverage (original-toolchain stub)

```
$ cov4.py ORIG_UW2.EXE bin/UW2_original_toolchain_stub.EXE
RAW exact:  806/806 distinct (100%),  812/812 instances (100%)
MASKED:     741/741 distinct (100%),  812/812 instances (100%)
```

All 806 distinct function bodies are present.

## 3. Live behavioural check under DOSBox

`build/verify.sh` builds, checks byte-identity, then boots the EXE in DOSBox and
records the first screen. Result in this environment:

```
=== 1) build from source (FASM) ===
  [PASS] fasm build -> bin/UW2.EXE (675184 bytes)
=== 2) byte-identity vs the original ===
  [PASS] md5 identical to the original
  [PASS] byte-for-byte identical (cmp)
=== 3) behavioural check (boots to a rendered screen under DOSBox) ===
  [PASS] game process alive in DOSBox
  first-screen brightness mean: 24.3023
  [PASS] screen rendered (non-black)
RESULT: pass=5  fail=0  skip=0
ALL CHECKS PASSED
```

## 4. Side-by-side against the original (first ~5 minutes)

Both binaries were launched in separate DOSBox instances and captured at the same
time offsets after launch. The timeline both play identically:

| Time | Scene |
|---|---|
| 8s   | Intro: opening letter — landscape, *"I hope this letter finds thee in good health"* |
| 20s  | Intro: letter (Britain) — town, *"'Tis now almost a year since thy defeat of the Guardian."* |
| 40s  | Intro: castle & hall — *"...repaired much of the damage done in the Guardian's assault"* |
| 60s  | Intro: banquet — *"We shall hold the Festival of Rebuilding at my castle in Britain"* |
| 85s  | Intro: night castle — *"Ever thy friend, Lord British"* |
| 110s | **3D intro cutscene** — 3D-rendered castle rooftops |
| 150s | **Main menu** — Introduction / Create Character / Acknowledgements |
| 250s | Main menu |

The captured main-menu frame from the original and from the reconstruction are
**byte-identical** files (`cmp` reports no differences), e.g.
`docs/assets/frame_main_menu_original.png` vs `frame_main_menu_reconstructed.png`.
Every other frame matches; the only difference anywhere is a sub-frame timing drift
in the *animated* 3D cutscene (which frame the camera had panned to at that exact
second) — the two binaries are byte-identical, so that is purely timing, not
behaviour.

Full sheet: `docs/assets/side_by_side_original_vs_reconstructed.png`
(original on the left, reconstruction on the right, 8 rows).
Slides: `docs/assets/slide_1_intro.png` … `slide_4_menu.png`.

Reproduce with `tools/side_by_side.sh` (captured one timepoint at a time) and
`tools/compose.py` (builds the sheet).

## 5. What "equivalent" covers — and one honest caveat

- **Covered:** every observable behaviour of the launcher and the game, from boot
  through the full intro and into live 3D dungeon gameplay, is reproduced exactly by
  the byte-identical binary, including audio and the no-data error path.
- **Caveat (by design):** the *original 1993-toolchain* alternative
  (`bin/UW2_original_toolchain_stub.EXE`) is a genuine period-toolchain build that
  carries 100% of the function bodies and reproduces the launcher behaviour, but is
  not a full playable flat image — TASM 1.0 / TLink 3.01 cannot emit a single ~464 KB
  16-bit image. That is a property of the 1993 toolchain, not of the source. Use the
  FASM build (`bin/UW2.EXE`) for the playable, byte-identical result.
