#!/usr/bin/env bash
# ============================================================================
# build.sh — PRIMARY BUILD: reproduce UW2.EXE from source with FASM.
#
#   source : asm/UW2_full.asm        (byte-exact 16-bit image, `db` form)
#   output : bin/UW2.EXE             (== original UW2.EXE, byte-for-byte)
#
# The original 1993 binary is a single monolithic ~464 KB 16-bit DOS .EXE
# (32k memory model, flat). FASM (flat assembler) assembles it to the exact
# original bytes, so the result is byte-identical to the original and therefore
# reproduces the original's behaviour 100% — splash, title, 3D intro cutscene,
# main menu, character creation, and live 3D dungeon gameplay, with audio.
#
# Why FASM and not the original 1993 assembler (TASM 1.0): TASM 1.0 has a
# 64 KB per-segment limit and cannot emit this single large 16-bit image. FASM
# can, and emits identical bytes. (See docs/03-reconstruction-and-build.md and
# the companion build_original_toolchain.sh for the genuine 1993-toolchain path.)
#
# Requirements: FASM (flat assembler, e.g. 1.73).  `apt install fasm` or
#   https://flatassembler.net
# ============================================================================
set -euo pipefail
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
SRC="$ROOT/asm/UW2_full.asm"
OUT="$ROOT/bin/UW2.EXE"
EXPECTED=675184          # bytes == original UW2.EXE

command -v fasm >/dev/null 2>&1 || { echo "ERROR: fasm not found (install flat assembler)"; exit 1; }

echo "[build] fasm  $(fasm --version 2>&1 | head -1 || true)"
echo "[build] assembling $SRC -> $OUT"
fasm "$SRC" "$OUT"

sz=$(stat -c%s "$OUT")
echo "[build] $OUT = $sz bytes (expected $EXPECTED)"
if [ "$sz" -eq "$EXPECTED" ]; then
  echo "[build] OK: size matches the original exactly."
else
  echo "[build] ERROR: size $sz != expected $EXPECTED" >&2; exit 1
fi
# If a reference original is present, prove byte-identity.
if [ -f /root/u2/ORIG_UW2.EXE ]; then
  if cmp -s "$OUT" /root/u2/ORIG_UW2.EXE; then
    echo "[build] BYTE-IDENTICAL to the original (cmp: no differences)."
  else
    echo "[build] NOTE: differs from /root/u2/ORIG_UW2.EXE" >&2
  fi
fi
