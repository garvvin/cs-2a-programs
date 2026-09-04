#!/bin/bash
echo "=== Fitness Functions WebAssembly Build ==="
echo "Compiling C++ to WASM with Emscripten (Embind)..."
emcc -lembind src/fitness-ui.cpp -o web/fitness.js -sSINGLE_FILE -sEXPORTED_RUNTIME_METHODS=ccall,cwrap
echo "Done! Output: web/fitness.js (WASM embedded, no server required)"
