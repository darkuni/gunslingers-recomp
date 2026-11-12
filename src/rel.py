"""REL (Dolphin relocatable module) parsing."""
import struct

class Rel:
    def __init__(self, path):
        d = self.d = open(path, 'rb').read()
        self.path = path
        (self.id, _, _, self.nsec, so, self.name_off, self.name_size, self.ver, self.bss_size,
         rel_off, imp_off, imp_size) = struct.unpack('>12I', d[:48])
        self.prolog_sec, self.epilog_sec, self.unres_sec, self.bss_sec = d[0x30:0x34]
        self.prolog, self.epilog, self.unresolved = struct.unpack('>3I', d[0x34:0x40])
        self.secs = []          # (file offset or 0, size, exec)
        for i in range(self.nsec):
            o, s = struct.unpack('>II', d[so + i * 8:so + i * 8 + 8])
            self.secs.append((o & ~3, s, bool(o & 1)))
        self.relocs = []        # (module, patch_sec, patch_off, type, target_sec, addend)
        for i in range(imp_size // 8):
            mod, off = struct.unpack('>II', d[imp_off + i * 8:imp_off + i * 8 + 8])
            sec = 0; pos = 0
            while True:
                o, t, s, a = struct.unpack('>HBBI', d[off:off + 8]); off += 8
                if t == 203: break
                pos += o
                if t == 202: sec = s; pos = 0; continue
                if t == 201: continue
                self.relocs.append((mod, sec, pos, t, s, a))

    def word(self, sec, off):
        o, s, x = self.secs[sec]
        if not o or off < 0 or off + 4 > s: return None
        return struct.unpack('>I', self.d[o + off:o + off + 4])[0]

    def sig(self):
        """identity used at runtime: section sizes + bss size"""
        return tuple(s for o, s, x in self.secs) + (self.bss_size,)
