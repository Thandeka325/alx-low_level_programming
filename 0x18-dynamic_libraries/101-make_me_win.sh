#!/bin/bash
wget -qP /tmp/ https://github.com/Thandeka325/alx-low_level_programming/raw/master/0x18-dynamic_libraries/mymole.so
export LD_PRELOAD="/tmp/mymole.so"
