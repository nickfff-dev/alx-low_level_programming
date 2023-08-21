#!/bin/bash
echo -e '#include <stdlib.h>\nint rand(void) { static int i; return i++ % 75 + 1; }' > predict.c
gcc -shared -o predict.so predict.c
