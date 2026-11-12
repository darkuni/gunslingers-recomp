# Gunslingers (SW7EVN Rev 1, Wii disc, NTSC-U) - native recomp notes

Same recompiler and runtime as House of the Dead: Overkill, Lost in Shadow, Martian Panic and TARGET: Terror.

## Source
- Disc image `Gunslingers (USA) (En,Fr,Es) (Rev 1).wbfs`, sha1 cb90191e55ef8dda854b362e8d8e42e50d89438c.
- main.dol sha1 e096b26412b35a37c93696d781d0df588b25cf00, entry 0x80006310; RVL SDK Dec 11 2009 (IOS56, the same
  build as Lost in Shadow), HBM May 2010, THP movies, FMOD (Audio/*.fsb, *.fev). Neko Entertainment's NGDK engine.
  No REL modules, no symbols.

## Function boundaries (tools/funcfind.py, no dtk)
- Seeds: entry, `bl` targets, tail branches over padding (KPADRead: `b KPADiRead`), branch targets outside the
  branching function (adjustor thunks), code addresses built with lis/addi|ori, and data words pointing to code
  right after a function end or padding. Extent = control-flow closure up to the next seed; code past the end
  (after padding) starts another function.
- Switch tables: lis/addi base within 64 bytes of a bctr, and an `lwzx` between the addi and the bctr. Without
  the lwzx test, a table of state callbacks (`lwz r12,8(r4); mtctr; bctr`, 0x8000C3E4 -> 0x803832C0) was taken
  for a switch and its targets were not functions: crash after the level 1 briefing.
- The lis may be far above the bctr (0x8019595C: 0x4000 bytes are searched); a missed table there split the
  function (crash after the save prompt).
- recomp.py: any function whose last instruction is not a return/branch now calls the next one (the
  _savegpr/_restgpr ladders are split per entry).

## Naming (tools/cmatch.py)
- The generated C++ of the other recomps is matched against ours with addresses, labels, callees and numbers
  masked; unique hashes pair up, then callees pair up in call order, and functions the references replaced with HLE
  are placed by address order between matched neighbours of equal size. Lost in Shadow (same SDK) names ~1,770,
  Martian Panic ~720: 2,509 in all.

## game.h constants
- __AXDSPResumeCallback 0x801C5D20, DecrementerExceptionCallback 0x80244130, iosFree 0x80232A90, OSExitThread
  0x8024D670, SelectThread idle branch 0x8024D2C8, interrupt table r13-0x61E0, IOS heap r13-0x6FDC,
  OSDisable/EnableScheduler 0x8024CE40 / 0x8024CE80, __OSReschedule 0x8024D3A0. KPADStatus 0xF0 bytes.

## What was new for this game
- KPADRead and KPADiRead (Dec 2009 KPAD) are both HLE'd.
- Pointer y range: the game maps KPAD pos y of about -0.66..0.66 to the picture (x is -1..1). With -1..1 the
  crosshair moved too far vertically and menu buttons below the middle could not be hit. G_KPAD_Y_RANGE in game.h
  (measured on the title and menus; check with a mouse).
- Shader generator: TEV compare mode on two channels (RG16) needed a vec2 q8() overload.

## Testing
- `POINTER=x,y;x,y@frame;...` with `AUTOPRESS_FRAMES=1 AUTOPRESS=A@400-410,...`: A dismisses the safety screens,
  menus are pointer + B. Headless runs are slow in 3D (~8 fps with llvmpipe at resolution_scale 1).
