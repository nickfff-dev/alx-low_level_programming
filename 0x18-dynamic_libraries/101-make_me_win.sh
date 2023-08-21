#!/bin/bash
echo -e '#include <stdlib.h>\nunsigned int rand(void) { static int i; return (i < 5) ? (i++ % 5) + 9 : 9; }' > predict.c
gcc -shared -o predict.so predict.c
