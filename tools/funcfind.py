#!/usr/bin/env python3
"""Find function boundaries and switch tables in a main.dol without dtk; writes a dtk-style symbols.txt.

usage: funcfind.py main.dol symbols.txt

Seeds: the entry point, every `bl` target, code addresses built with lis/addi (or lis/ori) pairs, and data
words pointing into code at an address that follows a function end or padding. Switch tables (lis/addi base
near a bctr, entries inside the same function) are found first so their entries are not taken as seeds.
Each function's extent is its control-flow closure up to the next seed; code left over after it (past
padding) starts a new function. A seed that only a backward branch of the previous function crosses into
is merged back into it.
"""
import sys, os, bisect, struct
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'src'))
from dol import Dol
from ppcdec import decode

D = Dol(sys.argv[1])
TEXT = [(a, a + s) for o, a, s, t in D.sections if t]
DATA = [(a, a + s) for o, a, s, t in D.sections if not t]


def in_text(x):
    return any(a <= x < b for a, b in TEXT) and not x & 3


def sec_of(x):
    for a, b in TEXT:
        if a <= x < b:
            return a, b
    return None


W = {}
for a, b in TEXT:
    for x in range(a, b, 4):
        W[x] = D.word(x)
dec = {x: decode(w) for x, w in W.items()}


def btarget(pc):
    m, f = dec[pc]
    if m == 'b':
        return (f['li'] if f['aa'] else pc + f['li']) & 0xffffffff
    if m == 'bc':
        return (f['bd'] if f['aa'] else pc + f['bd']) & 0xffffffff
    return None


def terminal(pc):
    m, f = dec[pc]
    if m == 'b' and not f['lk']:
        return True
    if m in ('bclr', 'bcctr') and (f['bo'] & 0x14) == 0x14 and not f['lk']:
        return True
    if m == 'rfi':
        return True
    return False


# ---- switch tables: lis rX,hi / addi rY,rX,lo near a bctr; entries are code addresses
jt = {}          # table address -> list of targets
jt_words = set()
jt_at = {}       # bctr pc -> table address
for a, b in TEXT:
    for pc in range(a, b, 4):
        m, f = dec[pc]
        if m != 'bcctr' or f['lk']:
            continue
        hi = {}
        for q in range(max(a, pc - 0x4000), pc, 4):
            mm, ff = dec[q]
            if mm == 'addis' and ff['ra'] == 0:
                hi[ff['rd']] = (ff['simm'] << 16) & 0xffffffff
            elif q >= pc - 64 and mm == 'addi' and ff['ra'] in hi:
                # a switch loads its target with lwzx off the table base; a struct of function pointers
                # (lwz rX,off(base)) is not a switch
                if not any(dec[z][0] == 'lwzx' for z in range(q + 4, pc, 4)):
                    continue
                base = (hi[ff['ra']] + ff['simm']) & 0xffffffff
                if sec_of(base):
                    continue
                if base in jt:
                    jt_at[pc] = base
                    continue
                ts = []
                k = 0
                while k < 1024:
                    t = D.word(base + 4 * k)
                    if t is None or not in_text(t) or abs(t - pc) > 0x40000:
                        break
                    ts.append(t)
                    k += 1
                if ts:
                    jt[base] = ts
                    jt_at[pc] = base
                    jt_words.update(range(base, base + 4 * len(ts), 4))

jt_targets = {t for ts in jt.values() for t in ts}

# ---- seeds
strong = {D.entry}          # call targets: always function starts
for pc, (m, f) in dec.items():
    if m == 'b' and f['lk']:
        t = btarget(pc)
        if in_text(t):
            strong.add(t)


# a tail branch over padding to the next function (KPADRead: b KPADiRead) starts a function there
for pc, (m, f) in dec.items():
    if m == 'b' and not f['lk']:
        t = btarget(pc)
        if in_text(t) and pc < t <= pc + 0x40 and t > pc + 4 and all(W.get(x) == 0 for x in range(pc + 4, t, 4)):
            strong.add(t)


def after_end(x):
    """x follows a function end or padding (or starts a section)."""
    s = sec_of(x)
    if not s:
        return False
    if x == s[0]:
        return True
    p = x - 4
    return W[p] == 0 or terminal(p)


weak = set()
# code addresses formed in code (callbacks: OSCreateThread, OSSetAlarm, vtables built in ctors)
for a, b in TEXT:
    hi = {}
    for pc in range(a, b, 4):
        m, f = dec[pc]
        if m == 'addis' and f['ra'] == 0:
            hi[f['rd']] = (f['simm'] << 16) & 0xffffffff
        elif m == 'addi' and f['ra'] in hi:
            t = (hi[f['ra']] + f['simm']) & 0xffffffff
            if in_text(t) and t not in jt_targets and after_end(t):
                weak.add(t)
        elif m == 'ori' and f['rd'] in hi:
            t = hi[f['rd']] | f['uimm']
            if in_text(t) and t not in jt_targets and after_end(t):
                weak.add(t)
        if terminal(pc):
            hi = {}
# data pointers into code
for a, b in DATA:
    for x in range(a, b, 4):
        if x in jt_words:
            continue
        t = D.word(x)
        if in_text(t) and t not in jt_targets and after_end(t):
            weak.add(t)
# exception vectors / section starts
for a, b in TEXT:
    weak.add(a)

seeds = set(strong) | weak


def extent(start, limit):
    """highest address+4 reached by control flow from start without passing limit"""
    seen = set()
    todo = [start]
    hi = start
    while todo:
        pc = todo.pop()
        while start <= pc < limit and pc not in seen and pc in W:
            seen.add(pc)
            hi = max(hi, pc + 4)
            m, f = dec[pc]
            if m in ('b', 'bc') and not f['lk']:
                t = btarget(pc)
                if start <= t < limit:
                    todo.append(t)
            if m == 'bcctr' and not f['lk'] and (f['bo'] & 0x14) == 0x14:
                # switch: targets from tables near this bctr
                if pc in jt_at:
                    for t in jt[jt_at[pc]]:
                        if start <= t < limit:
                            todo.append(t)
            if terminal(pc):
                break
            pc += 4
    return hi


def solve(seeds):
    while True:
        ss = sorted(seeds)
        funcs = []
        added = False
        for i, s in enumerate(ss):
            sec = sec_of(s)
            if not sec:
                continue
            lim = min(ss[i + 1] if i + 1 < len(ss) else sec[1], sec[1])
            e = extent(s, lim)
            # skip padding after the end; anything else is a new function
            x = e
            while x < lim and W[x] == 0:
                x += 4
            if x < lim:
                seeds.add(x)
                added = True
            funcs.append((s, e))
        if not added:
            return funcs


funcs = solve(seeds)
# branch targets outside the branching function (thunks, shared tails) are function starts too
while True:
    starts = [s for s, e in funcs]
    st = set(starts)
    new = set()
    for s, e in funcs:
        for pc in range(s, e, 4):
            m, f = dec[pc]
            if (m == 'b' and not f['lk']) or (m == 'bc' and not f['lk']):
                t = btarget(pc)
                if not (s <= t < e) and t not in st and in_text(t):
                    new.add(t)
    if not new:
        break
    strong |= new
    seeds |= new
    funcs = solve(seeds)

# merge: a weak seed reached by a backward/forward branch of the previous function's body that runs into it
# (previous function does not end with a terminal instruction -> it falls through into the seed)
changed = True
while changed:
    changed = False
    starts = [s for s, e in funcs]
    for i in range(len(funcs) - 1):
        s, e = funcs[i]
        n, ne = funcs[i + 1]
        if e == n and not terminal(e - 4) and n not in strong:
            seeds.discard(n)
            changed = True
    if changed:
        funcs = solve(seeds)

# switch tables per function (only tables whose targets all lie in one function)
starts = [s for s, e in funcs]
tables = []
for base, ts in sorted(jt.items()):
    i = bisect.bisect_right(starts, ts[0]) - 1
    s, e = funcs[i]
    good = [t for t in ts if s <= t < e]
    if good:
        tables.append((base, 4 * len(good)))

with open(sys.argv[2], 'w') as o:
    for s, e in funcs:
        sec = '.init' if s < TEXT[1][0] and TEXT[0][0] <= s < TEXT[0][1] else '.text'
        name = '__start' if s == D.entry else f'fn_{s:08X}'
        o.write(f'{name} = {sec}:0x{s:08X}; // type:function size:0x{e - s:X} scope:global\n')
    for base, sz in tables:
        o.write(f'jumptable_{base:08X} = .data:0x{base:08X}; // type:object size:0x{sz:X} scope:local\n')
print('functions', len(funcs), 'strong', len(strong), 'weak', len(weak), 'tables', len(tables),
      'fallthrough', sum(1 for s, e in funcs if not terminal(e - 4)))
