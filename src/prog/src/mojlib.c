// prevajam z :x
//  gcc -c mojlib.c
//  ar rcs libmojlib.a mojlib.o

#include "../include/moj.h"
#include <stdio.h>


void izpisi(char *niz) {
  for (int i=0; i<N; i++)
    printf("%s\n", niz);
}

