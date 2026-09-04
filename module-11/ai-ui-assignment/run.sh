#!/bin/bash
echo "=== Starting local dev server ==="
echo "Open http://localhost:8000 in your browser"
cd web && python3 -m http.server 8000
