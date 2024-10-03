#include <stdio.h>

int main() {
  volatile int i=4;
  int j=5;

  int *p;
  p = &j;
  p++;
  *p = 7;

  printf ("i=%d, j=%d\n", i,j);
}
