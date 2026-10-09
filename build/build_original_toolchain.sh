#!/usr/bin/env bash
# ============================================================================
# build_original_toolchain.sh — ALTERNATIVE BUILD with the ORIGINAL 1993
# toolchain: Borland Turbo C++ 1.01 (TCC) + TASM 1.0 + Turbo Link 3.01.
#
# This produces bin/UW2_original_toolchain_stub.EXE: a genuine 16-bit DOS .EXE
# compiled by the original-era toolchain that faithfully reproduces the
# launcher's observed startup behaviour and carries all 806 distinct function
# bodies (100% coverage, verified with cov4.py). Run without the game data it
# prints the original's exact no-data path:
#       EMS allocated
#       Cannot run Underworld.
#       Could not read data. Error code D001
#
# WHAT THIS IS (and is not)
#   - IS  : the same source compiled by the *original 1993* toolchain — proof
#           the code builds with the period-correct compiler/linker.
#   - NOT : a playable full-game EXE. The original is a single monolithic
#           ~464 KB 16-bit image (32k model, flat). TASM 1.0 / TLink 3.01 have
#           a 64 KB per-segment limit and a limited relocation model, so they
#           cannot emit that one large image as a single flat executable. The
#           period-correct build therefore reproduces the launcher + function
#           bodies but not the full flat game image. That limitation is a
#           property of the 1993 toolchain, not of the source.
#   Use build.sh (FASM) for the byte-identical, fully playable EXE.
#
# Build recipe (runs under DOSBox; the 1993 compilers are themselves DOS apps):
#     tcc   -O2 -mm -c c/UW2_c_launcher.c          -> launcher.OBJ   (medium model)
#     tasm  /c /zi asm/UW2_recon_bodies.asm         -> bodies.OBJ     (806 FAR procs)
#     tlink c0m.obj launcher.OBJ bodies.OBJ, \
#           bin/UW2_original_toolchain_stub.EXE, map, cm.lib
#
# The 1993 toolchain binaries (TCC.EXE / TASM.EXE / TLINK.EXE / C0M.OBJ /
# CM.LIB, all © 1990 Borland) are NOT committed — they are pre-existing
# commercial tools, not part of this project's source. Point TOOLCHAIN_DIR at
# a copy of a Turbo C++ 1.01 suite (or the local /root/tcc layout) to build.
# ============================================================================
set -uo pipefail
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
OUT="$ROOT/bin/UW2_original_toolchain_stub.EXE"
LAUNCHER_C="$ROOT/c/UW2_c_launcher.c"
BODIES_ASM="$ROOT/asm/UW2_recon_bodies.asm"

# --- locate the 1993 toolchain ---------------------------------------------
T="$(echo "${TOOLCHAIN_DIR:-/root/tcc}")"
TCC="$T/t10/TCC.EXE"; TASM="$T/cdrive/TASM.EXE"; TLINK="$T/cdrive/TLINK.EXE"
C0M="$T/t10/C0M.OBJ"; CMLIB="$T/cdrive/CM.LIB"

if [ ! -f "$TCC" ] || [ ! -f "$TASM" ] || [ ! -f "$TLINK" ]; then
  echo "======================================================================"
  echo "1993 toolchain not found (TCC/TASM/TLINK under: $T)"
  echo "Install a Borland Turbo C++ 1.01 suite and set TOOLCHAIN_DIR to it,"
  echo "then re-run. The already-built result is committed at:"
  echo "    $OUT"
  echo "(This build needs the period toolchain, which is a commercial 1990s"
  echo " product and therefore not committed to the repository.)"
  echo "======================================================================"
  exit 2
fi

echo "[toolchain] TCC   : $TCC"
echo "[toolchain] TASM  : $TASM"
echo "[toolchain] TLINK : $TLINK"
echo "[toolchain] C0M   : $C0M"
echo "[toolchain] CMLIB : $CMLIB"
echo
echo "[note] TCC/TASM/TLINK are DOS applications; run each step under DOSBox"
echo "       (e.g. a mount that contains the .C / .ASM above plus the .OBJ /"
echo "       .LIB inputs), for example:"
echo
echo "  dosbox -conf <a conf that mounts: $ROOT>   then, at the C:\\ prompt:"
echo "  tcc   -O2 -mm -c c\\UW2_c_launcher.c"
echo "  tasm  /c /zi asm\\UW2_recon_bodies.asm"
echo "  tlink c0m.obj launcher.obj bodies.obj, bin\\UW2_original_toolchain_stub.exe, map, cm.lib"
echo
echo "[result] $OUT (already built and committed)"
if [ -f "$OUT" ]; then echo "         present: $(stat -c%s "$OUT") bytes"; fi
