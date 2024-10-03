#include <stdio.h>

int main() {
  const int i=4;

  // spreminjanje preko kazalca ne gre!
  int *p;
  p = &i;
  *p = 7;

  printf ("i=%d\n", i);
}
