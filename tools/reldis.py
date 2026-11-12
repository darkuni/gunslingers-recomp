"""reldis.py module.rel [start_off end_off]: disassemble a REL's code section with relocation targets."""
import sys, os, capstone
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'src'))
from rel import Rel
from dol import load_symbols
r = Rel(sys.argv[1])
F, O = load_symbols(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'src', 'symbols.txt'))
nm = {a: n for a, s, n in F}
rel = {}
for mod, ps, po, t, ts, a in r.relocs:
    if ps == 1:
        rel[po & ~3] = (t, ts, a, mod == r.id)
o, sz, x = r.secs[1]
lo = int(sys.argv[2], 16) if len(sys.argv) > 2 else 0
hi = int(sys.argv[3], 16) if len(sys.argv) > 3 else sz
md = capstone.Cs(capstone.CS_ARCH_PPC, capstone.CS_MODE_32 | capstone.CS_MODE_BIG_ENDIAN); md.skipdata = True
for i in md.disasm(r.d[o + lo:o + hi], lo):
    note = ''
    if i.address in rel:
        t, ts, a, self_ = rel[i.address]
        note = f'   ; {"HA" if t == 6 else "LO" if t == 4 else "REL24" if t == 10 else t} ' + (f'sec{ts}+{a:X}' if self_ else nm.get(a, f'{a:08X}'))
    print(f'{i.address:05X} {i.mnemonic} {i.op_str}{note}')
