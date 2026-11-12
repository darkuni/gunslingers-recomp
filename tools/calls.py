"""calls.py addr... : list bl targets of each function (with names)."""
import sys, os
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'src'))
from dol import Dol, load_symbols
from ppcdec import decode
D = Dol('orig/main.dol'); F, O = load_symbols('config/symbols.txt')
nm = {a: n for a, s, n in F}; sz = {a: s for a, s, n in F}
for arg in sys.argv[1:]:
    a = int(arg, 16)
    print(f'{a:08X} {nm.get(a)}')
    for x in range(a, a + sz[a], 4):
        m, f = decode(D.word(x))
        if m == 'b':
            t = (x + f['li']) & 0xffffffff
            print(f'   {x:08X} {"bl" if f["lk"] else "b "} {t:08X} {nm.get(t, "?")}')
