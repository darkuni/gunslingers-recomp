"""REL modules for the static recompiler.

Each module's code section gets a fixed *virtual* base (0xC0000000 + k * 0x100000) that only the recompiler
uses: functions are named f_C0xxxxxx and internal branches resolve there. Where the module's code holds an
address (ADDR16_HA / ADDR16_LO relocations) the generated C++ computes it from g_relsec[k][section], the
section addresses the game's own OSLink assigned when it loaded the module (filled in by rel_on_link).
REL24 branches to main.dol become direct calls. At run time dispatch() maps an address inside a linked module
back to its virtual address.
"""
import os, glob, bisect
from rel import Rel
from ppcdec import decode

VBASE = 0xC0000000
VSTEP = 0x00100000


class Img:
    """main.dol plus the virtual code sections of the REL modules"""
    def __init__(self, dol):
        self.dol = dol
        self.rels = []          # (vbase, vend, rel, sec)

    def word(self, a):
        if a >= VBASE:
            for vb, ve, r, sec in self.rels:
                if vb <= a < ve:
                    return r.word(sec, a - vb)
            return None
        return self.dol.word(a)


def is_entry(w):
    m, f = decode(w)
    if m == 'stwu' and f['rd'] == 1 and f['ra'] == 1:
        return True
    if m == 'mfspr' and f['spr'] == 8:
        return True
    return False


def load(gen, img, reldir):
    """add every *.rel in reldir; returns (funcs, descs)"""
    funcs, descs = [], []
    for k, path in enumerate(sorted(glob.glob(os.path.join(reldir, '*.rel')), key=lambda p: os.path.basename(p).lower())):
        r = Rel(path)
        name = os.path.splitext(os.path.basename(path))[0]
        xs = [i for i, (o, sz, x) in enumerate(r.secs) if x]
        assert xs == [1], (name, xs)
        cs = 1
        vb = VBASE + k * VSTEP
        csize = r.secs[cs][1]
        assert csize <= VSTEP
        img.rels.append((vb, vb + csize, r, cs))
        bss = [i for i, (o, sz, x) in enumerate(r.secs) if not o and sz]
        descs.append((name, vb, r.secs, r.bss_size))

        # ---- relocations that touch the code section
        starts = set()
        data_code_ptrs = []     # (data sec, off, target code offset)
        for mod, ps, po, t, ts, a in r.relocs:
            self_ = mod == r.id
            if ps == cs:
                pc = vb + (po & ~3)   # HA/LO offsets point at the immediate halfword
                if t == 10:
                    assert not self_, (name, hex(po))
                    gen.br_reloc[pc] = a
                elif t in (4, 6):
                    if self_:
                        gen.imm_reloc[pc] = (t, f'g_relsec[{k}][{ts}]+0x{a:X}u')
                        if ts == cs:
                            starts.add(a)
                    else:
                        gen.imm_reloc[pc] = (t, a)
                else:
                    raise SystemExit(f'{name}: unhandled code relocation type {t} at {po:X}')
            elif self_ and ts == cs and t == 1:
                data_code_ptrs.append((ps, po, a))

        # ---- function starts
        for sec, off in ((r.prolog_sec, r.prolog), (r.epilog_sec, r.epilog), (r.unres_sec, r.unresolved)):
            if sec == cs:
                starts.add(off)
        starts.add(0)
        for off in range(0, csize, 4):
            w = r.word(cs, off)
            m, f = decode(w)
            if m == 'b' and f['lk'] and vb + off not in gen.br_reloc:
                t = off + f['li']
                if 0 <= t < csize:
                    starts.add(t)
        # data pointers into code: runs of them inside one function that has a bctr are jump tables,
        # anything else (vtables, callbacks) is a function entry
        data_code_ptrs.sort()
        runs, cur = [], []
        for e in data_code_ptrs:
            if cur and (e[0] != cur[-1][0] or e[1] != cur[-1][1] + 4):
                runs.append(cur); cur = []
            cur.append(e)
        if cur:
            runs.append(cur)
        jt = []
        sl = sorted(starts)
        for run in runs:
            tg = [a for _, _, a in run]
            i = bisect.bisect_right(sl, tg[0]) - 1
            s0 = sl[i]
            s1 = sl[i + 1] if i + 1 < len(sl) else csize
            has_bctr = any(decode(r.word(cs, o))[0] == 'bcctr' and not decode(r.word(cs, o))[1]['lk'] for o in range(s0, s1, 4))
            if (len(tg) >= 2 and has_bctr and all(s0 < a < s1 for a in tg)
                    and not any(is_entry(r.word(cs, a)) for a in tg)):
                jt.append((s0, tg))
            else:
                starts.update(tg)
        sl = sorted(starts)
        for i, a in enumerate(sl):
            e = sl[i + 1] if i + 1 < len(sl) else csize
            nm = f'{name}_{a:X}'
            if (r.prolog_sec, r.prolog) == (cs, a): nm = f'{name}_prolog'
            elif (r.epilog_sec, r.epilog) == (cs, a): nm = f'{name}_epilog'
            elif (r.unres_sec, r.unresolved) == (cs, a): nm = f'{name}_unresolved'
            funcs.append((vb + a, e - a, nm))
            gen.relfn[vb + a] = (k, vb)
        for s0, tg in jt:
            gen.jt[vb + s0].update(vb + a for a in tg)
            # entries that ended up in a later piece (split by another start) go through dispatch()
    return funcs, descs


def write_table(outdir, descs, write_if_changed):
    os.makedirs(outdir, exist_ok=True)
    o = ['#include "ppc.h"', '#include "rel_rt.h"', 'const RelDesc REL_DESC[] = {']
    for name, vb, secs, bss in descs:
        sz = ', '.join(f'0x{s:X}u' for o_, s, x in secs)
        o.append(f'  {{"{name}", 0x{vb:08X}u, {len(secs)}u, {{{sz}}}, 0x{bss:X}u}},')
    o.append('};')
    o.append(f'const unsigned REL_COUNT = {len(descs)};')
    o.append(f'uint32_t g_relsec[{max(1, len(descs))}][REL_MAXSEC];')
    write_if_changed(f'{outdir}/rels.cpp', '\n'.join(o) + '\n')
