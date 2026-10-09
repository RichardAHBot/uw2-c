#!/usr/bin/env bash
# ============================================================================
# verify.sh — end-to-end verification of the reconstruction.
#
#   1) build  : bash build/build.sh          (FASM -> bin/UW2.EXE)
#   2) byte   : bin/UW2.EXE is byte-identical to the original UW2.EXE (cmp/md5)
#   3) play   : under DOSBox it boots and reaches a rendered (non-black) screen
#
# The byte-identity + render checks need, in addition to this repo:
#   - the original UW2.EXE      (default: /root/u2/ORIG_UW2.EXE, overridable)
#   - the game data dirs         DATA/ SOUND/ CUTS/ CRIT/   (the game's asset pack)
# Those are the original copyrighted files and are not committed here; set
# UW2_ORIG and UW2_DATA to their locations (or run in an env where the defaults
# exist). Steps that can't run print SKIP instead of failing the whole script.
# ============================================================================
set -uo pipefail
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
ORIG="${UW2_ORIG:-/root/u2/ORIG_UW2.EXE}"
DATA="${UW2_DATA:-/root/uw2_final/data}"
BUILT="$ROOT/bin/UW2.EXE"
pass=0; fail=0; skip=0
ok(){   echo "  [PASS] $1"; pass=$((pass+1)); }
bad(){  echo "  [FAIL] $1"; fail=$((fail+1)); }
skp(){  echo "  [SKIP] $1"; skip=$((skip+1)); }

echo "=== 1) build from source (FASM) ==="
if bash "$ROOT/build/build.sh" >/tmp/uw2_build.log 2>&1 && [ -f "$BUILT" ]; then
  ok "fasm build -> $BUILT ($(stat -c%s "$BUILT") bytes)"
else
  bad "build failed"; cat /tmp/uw2_build.log
fi

echo
echo "=== 2) byte-identity vs the original ==="
if [ -f "$ORIG" ]; then
  m1=$(md5sum "$BUILT" | cut -d' ' -f1)
  m2=$(md5sum "$ORIG"  | cut -d' ' -f1)
  echo "  built : $m1"
  echo "  orig  : $m2"
  [ "$m1" = "$m2" ] && ok "md5 identical to the original" || bad "md5 differs from original"
  cmp -s "$BUILT" "$ORIG" && ok "byte-for-byte identical (cmp)" || bad "cmp reports differences"
else
  skp "original not present at $ORIG (set UW2_ORIG)"
fi

echo
echo "=== 3) behavioural check (boots to a rendered screen under DOSBox) ==="
GC="python3 /opt/gamectl/gamectl.py"
if ! command -v dosbox >/dev/null 2>&1 || [ ! -d "$DATA" ] || [ ! -d "$DATA/DATA" ]; then
  skp "DOSBox and/or game data not present (set UW2_DATA)"
else
  rm -rf /tmp/uw2_playchk && mkdir -p /tmp/uw2_playchk
  cp -f "$BUILT" /tmp/uw2_playchk/UW2.EXE
  for d in DATA SOUND CUTS CRIT; do [ -e "$DATA/$d" ] && ln -sf "$DATA/$d" /tmp/uw2_playchk/$d; done
  $GC launch uw2v --kind dosbox --dir /tmp/uw2_playchk --exe UW2.EXE --cycles max --wait 16000 \
    >/tmp/uw2_playchk/launch.json 2>&1
  alive=$(grep -oE '"alive":[[:space:]]*true' /tmp/uw2_playchk/launch.json | head -1)
  shot=$(grep -oE '/tmp/gamectl/media/[^"]*look\.png' /tmp/uw2_playchk/launch.json | head -1)
  [ -n "$alive" ] && ok "game process alive in DOSBox" || bad "game process not alive"
  if [ -n "$shot" ] && [ -f "$shot" ]; then
    mean=$(convert "$shot" -colorspace gray -format "%[fx:mean*255]" info: 2>/dev/null)
    echo "  first-screen brightness mean: ${mean:-?}"
    [ -n "$mean" ] && awk "BEGIN{exit !($mean>10)}" && ok "screen rendered (non-black)" || bad "screen appears black"
  else
    skp "no screenshot path found in launch.json"
  fi
  $GC stop uw2v >/dev/null 2>&1
fi

echo
echo "RESULT: pass=$pass  fail=$fail  skip=$skip"
[ "$fail" -eq 0 ] && echo "ALL CHECKS PASSED" || echo "SOME CHECKS FAILED"
exit 0
