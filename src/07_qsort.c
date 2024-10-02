#include <stdio.h>
#include <stdlib.h>

int primerjalnik(const void *a, const void *b) {
  int s1 = *((int *) a);
  int s2 = *((int *) b);
  return s2 - s1;
}


int main() {
  int n=10;
  int tab[] = {3,4,8,1,2,0,8,4,3,6};

  qsort(tab, n, sizeof(int), primerjalnik);

  for(int i=0; i<n;i++) {
    printf("%d ", tab[i]);
  }
  printf("\n");
}
