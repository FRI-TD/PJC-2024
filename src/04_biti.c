#include <stdio.h>

int steviloBitov(unsigned int x) { 
  int r = 0;
  while(x != 0) {
	if ((x & 1) == 1) r++;
	x = x >> 1;
  }
  return r;
}

int main() {
  unsigned int i=-1; // 101010

  printf("Stevilo prizganih v %d je %d\n", i, steviloBitov (i));

  int x = -8;
  x = x >> 1;
  printf("%d\n", x);
}
