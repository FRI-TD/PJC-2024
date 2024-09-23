#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   printf("RAND_MAX = %d\n", RAND_MAX);
   
   srand(time(NULL));
   int x = rand(), y = rand(), z = rand();
   printf("x = %d, y = %d, z = %d\n", x, y, z);
}