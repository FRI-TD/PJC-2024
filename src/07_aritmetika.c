#include <stdio.h>

int main() {
  int tab[] = {5,4,3,2,1};

  int *ptr = tab;
  while (ptr <= &tab[4]) {
    printf("%d\n", *ptr);
	ptr++;
  }

  printf("--------------------\n");
  char *ptrc = (char *) tab;
  while (ptrc <= (char *) &tab[4]) {
    printf("%d\n",  *((int*)ptrc));
	ptrc++;
  }

}
