# Gunslingers (Wii, NTSC-U) - native recompilation

A static recompilation of **Gunslingers** for Wii (disc, NTSC-U, `SW7EVN` Rev 1, Neko Entertainment / Valcon Games,
2010) to native code. The game's PowerPC executable is translated to C++ and runs on Windows and Linux (SteamOS /
Steam Deck) with a small runtime that replaces the Wii hardware, IOS and the DSP.

**No game data is included.** You need your own copy of the game as a disc image (`.iso`, `.ciso` or `.wbfs`).

## Status

Early: boots through the safety screens, the FMOD / Neko logos, the title, save creation, the main menu, gunslinger
selection, the level 1 briefing and into level 1 (train level: HUD, crosshair, shooting). Not played through yet.

## Download

[Releases](https://github.com/darkuni/gunslingers-recomp/releases): Windows zip and Linux tar.gz. Unpack, put your
disc image in the same folder and run `gunslingers.exe` (Windows) or `./gunslingers` (Linux / Steam Deck): the first
start builds the `game` folder from it. The zip's `README.txt` has the controls.

## Light gun controls

The mouse is the Wii Remote pointer: aim with the mouse, left button = B (fire), right button = A (reload), middle
button = A as well. Menus: point at a button and press B. Gamepad: either stick moves the crosshair,
RT = B, A = A, LT = A (reload). F1 / Esc opens the settings menu, F11 / Alt+Enter toggles fullscreen.

## Building

Same tool chain as the other Wii recomps (TARGET: Terror, Zack & Wiki, Lost in Shadow, Martian Panic, House of the
Dead: Overkill): the generated C++ is in `src/gen`; GitHub Actions cross-compiles the Windows exe with mingw-w64 and
SDL2 and builds the Linux one with `-DUSE_SDL=ON`. Regenerating `src/gen` needs the game's `main.dol` from your disc
(`tools/prepare_disc.py`), see [NOTES.md](NOTES.md).

## Disclaimer

Unofficial fan project, **not affiliated with, endorsed by, or sponsored by** Neko Entertainment, Valcon Games or
Nintendo. *Gunslingers* and all related names and marks belong to their respective owners. This repository and its
builds contain no game data; `src/gen` and the exe contain code machine-translated from the game's executable.

## License

The project's own code is released under the [MIT License](LICENSE). Bundled third-party components keep their own
licenses; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
