#!/bin/bash
set -u
eval "$(python3 /opt/gamectl/gamectl.py env --sh)" 2>/dev/null
GC() { python3 /opt/gamectl/gamectl.py "$@"; }
OUT=/root/cap
GAMES="/tmp/gamectl/games"
mkdir -p "$OUT"; rm -f "$OUT"/*.png "$OUT/progress.log"
OFFSETS="8 20 40 60 85 110 150 250"
capture_one () {
  local name=$1 exe=$2 tag=$3
  GC stop "$name" >/dev/null 2>&1; sleep 3
  GC launch "$name" --kind dosbox --dir /root/play --exe "$exe" --cycles max --wait 25000 >/dev/null 2>&1
  sleep 4
  local t0; t0=$(date +%s.%N)
  for ts in $OFFSETS; do
    local target now w
    target=$(python3 -c "print($t0 + $ts)")
    now=$(date +%s.%N)
    w=$(python3 -c "print(max(0.0, $target - $now))")
    [ "$(python3 -c "print(1 if $w>0 else 0)")" = "1" ] && sleep "$w"
    GC look "$name" --frames 1 >/dev/null 2>&1
    if [ -f "$GAMES/$name.last.png" ]; then
      cp -f "$GAMES/$name.last.png" "$OUT/${tag}_t${ts}.png"
      echo "$(date +%H:%M:%S) ${tag} t=${ts}s OK" >> "$OUT/progress.log"
    else
      echo "$(date +%H:%M:%S) ${tag} t=${ts}s FAILED" >> "$OUT/progress.log"
    fi
  done
  GC stop "$name" >/dev/null 2>&1
  echo "$(date +%H:%M:%S) ${tag} DONE" >> "$OUT/progress.log"
}
echo "=== capture start $(date) ===" > "$OUT/progress.log"
capture_one caporig  ORIG_UW2.EXE  orig
capture_one caprecon UW2RECON.EXE recon
echo "=== ALL DONE $(date) ===" >> "$OUT/progress.log"
