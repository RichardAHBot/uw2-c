#!/usr/bin/env python3
"""Build a side-by-side contact sheet: original (left) vs reconstructed (right),
over the first ~5 minutes, with a screen label + timestamp in the middle."""
import os, sys
from PIL import Image, ImageDraw, ImageFont

CAP = "/root/cap"
OFFSETS = [8, 20, 40, 60, 85, 110, 150, 250]

def load(tag, ts):
    p = f"{CAP}/{tag}_t{ts}.png"
    if not os.path.exists(p):
        return None
    return Image.open(p).convert("RGB")

# label the screen each offset corresponds to (best guess; we'll verify by looking)
LABELS = {
    8:   "Intro: opening letter",
    20:  "Intro: letter (Britain)",
    40:  "Intro: castle & hall",
    60:  "Intro: banquet",
    85:  "Intro: night castle",
    110: "3D intro cutscene",
    150: "Main menu",
    250: "Main menu",
}
def label(ts):
    return LABELS.get(ts, "")

W = 640; H = 400                       # native window size
LABEL_W = 230                          # middle label column
PAD = 12
FONT = None
for fp in ["/usr/share/fonts/truetype/dejavu/DejaVuSans-Bold.ttf",
           "/usr/share/fonts/truetype/liberation/LiberationSans-Bold.ttf"]:
    if os.path.exists(fp):
        try: FONT = ImageFont.truetype(fp, 20); break
        except Exception: pass
if FONT is None: FONT = ImageFont.load_default()

rows = []
any_missing = False
for ts in OFFSETS:
    a = load("orig", ts); b = load("recon", ts)
    if a is None or b is None:
        any_missing = True
        continue
    a = a.resize((W, H), Image.NEAREST)
    b = b.resize((W, H), Image.NEAREST)
    row = Image.new("RGB", (W*2 + LABEL_W + PAD*3, H + PAD*2), (24, 26, 34))
    d = ImageDraw.Draw(row)
    d.rectangle([0, 0, W + PAD, H + PAD*2], fill=(10,10,14))
    row.paste(a, (PAD, PAD))
    d.rectangle([W + PAD + LABEL_W, 0, W*2 + PAD*2, H + PAD*2], fill=(10,10,14))
    row.paste(b, (W + PAD + LABEL_W + PAD, PAD))
    # middle labels
    d.text((W + PAD + 12, PAD + 6), f"t = {ts}s", fill=(255,205,80), font=FONT)
    d.text((W + PAD + 12, PAD + 34), label(ts), fill=(180,200,255), font=FONT)
    d.text((W + PAD + 12, PAD + 66), "ORIG   <->   RECON", fill=(150,150,150), font=FONT)
    d.line([W + PAD + LABEL_W//2, PAD + 100, W + PAD + LABEL_W//2, H + PAD - 10],
           fill=(70,70,90), width=1)
    rows.append(row)

if not rows:
    print("no captures found", file=sys.stderr); sys.exit(1)

RH = rows[0].height
sheet = Image.new("RGB", (rows[0].width, RH*len(rows) + PAD*(len(rows)+1) + 70), (12,13,18))
d = ImageDraw.Draw(sheet)
for fp in ["/usr/share/fonts/truetype/dejavu/DejaVuSans-Bold.ttf"]:
    if os.path.exists(fp):
        try: d.text((PAD, 14),
            "Ultima Underworld II  -  ORIGINAL (left) vs RECONSTRUCTED (right), first ~5 minutes",
            fill=(240,240,240), font=ImageFont.truetype(fp, 22)); break
        except Exception: pass
y = 70 + PAD
for r in rows:
    sheet.paste(r, (PAD, y)); y += RH + PAD
out = f"{CAP}/sidebyside.png"
sheet.save(out)
print("saved", out, sheet.size, "rows:", len(rows), "missing:", any_missing)
