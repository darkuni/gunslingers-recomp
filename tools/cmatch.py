#!/usr/bin/env python3
"""Name functions by matching our generated C++ against other recomps' src/gen (same recompiler).

usage: cmatch.py our_gen_dir our_symbols.txt out.json ref_gen_dir [ref_gen_dir ...]

Bodies are compared with addresses, labels, callees and numbers masked. A body hash that is unique on both
sides gives a match; matched pairs then name their callees pairwise (same call sequence length). Functions the
references replaced with HLE (no body) are placed by address order between matched neighbours with equal sizes.
Writes {our_addr_hex: [ref_addr_hex, name]} like xmatch.py, for apply_xmatch.py.
"""
import sys, os, re, glob, json, hashlib, collections, bisect

FN = re.compile(r'^(?:void \w+\(Ctx\*(?: __restrict c)?\);\n)?// ([^\n]*)\n(?:static )?void f_([0-9A-F]{8})(?:_orig|_sj)?\(Ctx\* __restrict c\) \{\n(.*?)\n\}', re.M | re.S)
CALL = re.compile(r'\bf_([0-9A-F]{8})\(')


def load_gen(d):
    funcs = {}
    for p in sorted(glob.glob(os.path.join(d, 'code_*.cpp'))):
        t = open(p).read()
        for m in FN.finditer(t):
            name, a, body = m.group(1), int(m.group(2), 16), m.group(3)
            lines = [l for l in body.split('\n') if 'trace_call(' not in l]
            hle = any('hle_' in l or 'stub_log(' in l for l in lines[:2])
            calls = [int(x, 16) for x in CALL.findall(body)]
            norm = []
            for l in lines:
                l = re.sub(r'//.*$', '', l)
                l = re.sub(r'\bf_[0-9A-F]{8}\b', 'F', l)
                l = re.sub(r'\bL_[0-9A-F]{8}\b', 'L', l)
                l = re.sub(r'0x[0-9A-Fa-f]+u?', 'N', l)
                l = re.sub(r'(?<![\w\[])-?\d+(?![\w\]])', 'N', l)
                norm.append(l.strip())
            h = hashlib.sha1('\n'.join(norm).encode()).hexdigest()
            funcs[a] = dict(name=name, hle=hle, calls=calls, h=h, n=len(lines))
    # sizes from the table
    tp = os.path.join(d, 'table.cpp')
    for m in re.finditer(r'\{0x([0-9A-F]{8})u, 0x([0-9A-F]+)u, f_\w+, "(.*)"\}', open(tp).read()):
        a = int(m.group(1), 16)
        if a in funcs:
            funcs[a]['size'] = int(m.group(2), 16)
        else:
            funcs[a] = dict(name=m.group(3), hle=True, calls=[], h=None, n=0, size=int(m.group(2), 16))
    return funcs


generic = re.compile(r'^(fn_|func_|lbl_|sub_|@|\$\$|zz_|\.|__sinit_|dtor_|ctor_|jumptable)')
ours = load_gen(sys.argv[1])
out_path = sys.argv[3]
result = {}
for refdir in sys.argv[4:]:
    ref = load_gen(refdir)
    oh = collections.defaultdict(list)
    rh = collections.defaultdict(list)
    for a, f in ours.items():
        if f['h']:
            oh[f['h']].append(a)
    for a, f in ref.items():
        if f['h'] and not f['hle']:
            rh[f['h']].append(a)
    pairs = {}
    for h, oa in oh.items():
        ra = rh.get(h, [])
        if len(oa) == 1 and len(ra) == 1 and ours[oa[0]]['n'] >= 3:
            pairs[oa[0]] = ra[0]
    # call propagation
    changed = True
    while changed:
        changed = False
        for o, r in list(pairs.items()):
            oc, rc = ours[o]['calls'], ref[r]['calls']
            if len(oc) != len(rc):
                continue
            for x, y in zip(oc, rc):
                if x in ours and y in ref and x not in pairs:
                    pairs[x] = y
                    changed = True
    # HLE'd / bodiless reference functions: place by order between matched neighbours with equal size
    os_ = sorted(ours)
    rs = sorted(ref)
    inv = {r: o for o, r in pairs.items()}
    for i, r in enumerate(rs):
        if r in inv:
            continue
        # nearest matched ref neighbour below
        j = i - 1
        while j >= 0 and rs[j] not in inv:
            j -= 1
        if j < 0:
            continue
        k = os_.index(inv[rs[j]]) + (i - j)
        if k < len(os_) and ours[os_[k]].get('size') == ref[r].get('size') and os_[k] not in pairs:
            # check the walk: all functions in between have equal sizes
            if all(ours[os_[os_.index(inv[rs[j]]) + d]].get('size') == ref[rs[j + d]].get('size') for d in range(1, i - j + 1)):
                pairs[os_[k]] = r
    n = 0
    for o, r in pairs.items():
        nm = ref[r]['name']
        key = f'{o:08X}'
        if key in result or generic.match(nm):
            continue
        result[key] = [f'{r:08X}', nm]
        n += 1
    print(refdir, 'pairs', len(pairs), 'named', n)
json.dump(result, open(out_path, 'w'), indent=0)
print('total named', len(result))
