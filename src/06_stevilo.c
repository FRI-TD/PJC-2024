#include <stdio.h>

int main() {
  int i= 5;

  int x;  // shranjujem naslov
  x = (int) &i;
  *((int *)x) = 10;

  printf("%d\n", i);

  printf("Naslov spr. x: %p\n", &x);
}
