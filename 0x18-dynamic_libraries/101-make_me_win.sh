#!/bin/bash
wget -q -O /tmp/preload.so https://github.com/fabrizia2/alx-low_level_programming/raw/master/0x18-dynamic_libraries/preload.so
export LD_PRELOAD=/tmp/preload.so
