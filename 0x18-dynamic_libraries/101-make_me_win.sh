#!/bin/bash
wget -O /tmp/101-code_injection.so https://github.com/felixayot/alx-low_level_programming/blob/master/0x18-dynamic_libraries/101-code_injection.so
export LD_PRELOAD=/tmp/101-code_injection.so
