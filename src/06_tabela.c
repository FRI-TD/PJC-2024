#include <stdio.h>

int main() {
  int a[5] = {3,6,5,1,0};

  int *p;

  p = a;

  p[3] = 7;
  printf("%d\n", a[3]);

  *p =2;
  printf("%d\n", a[0]);

  *(p+2) = 3;
}
