#include <stdio.h>

void bla(int *x) {
  *x = 10;
}

int main() {
  int a = 5;
  bla(&a);
  printf("a=%d\n", a); 
}
