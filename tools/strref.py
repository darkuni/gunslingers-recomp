"""strref.py str... : functions in main.dol that build the address of each string (lis/addi pair)."""
import sys, os, bisect
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'src'))
from dol import Dol, load_symbols
from ppcdec import decode
D = Dol('orig/main.dol'); F, O = load_symbols('config/symbols.txt')
starts = [a for a, s, n in F]
import re
sy = open('config/symbols.txt').read()
SDA = 0x805FCAE0
SDA2 = 0x80601160
raw = open('orig/main.dol', 'rb').read()
def addrs(s):
    out = []
    b = s.encode(); i = raw.find(b)
    while i >= 0:
        # map file offset -> address
        for k in range(18):
            o = int.from_bytes(raw[k*4:k*4+4], 'big'); a = int.from_bytes(raw[0x48+k*4:0x4C+k*4], 'big'); z = int.from_bytes(raw[0x90+k*4:0x94+k*4], 'big')
            if o and o <= i < o + z: out.append(a + i - o)
        i = raw.find(b, i + 1)
    return out
want = {}
for s in sys.argv[1:]:
    for a in addrs(s): want[a] = s
    print(s, [hex(a) for a in addrs(s)])
for a, sz, n in F:
    hi = {13: SDA, 2: SDA2}
    for x in range(a, a + sz, 4):
        m, f = decode(D.word(x))
        if m == 'addis' and f['ra'] == 0: hi[f['rd']] = (f['simm'] << 16) & 0xffffffff
        elif m == 'addi' and f['ra'] in hi:
            t = (hi[f['ra']] + f['simm']) & 0xffffffff
            hi[f['rd']] = t
            if t in want: print(f'{a:08X} {n} -> "{want[t]}"')
