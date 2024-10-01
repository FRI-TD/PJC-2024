#include <stdio.h>

int strlen1(char niz[]) {
  int i=0;
  while (niz[i] != '\0')
	i++;
  return i;
}

int strlen2(char *niz) {
  int i=0; 
  while (*niz != '\0') {
    niz++; i++;
  }
  return i;
}

int strlen3(char *niz) {
  char *z = niz; 
  while (*niz != '\0') {
    niz++; 
  }
  return niz - z;
}

int main() {
  char niz[] = "abc";
  printf("Dolzina 1: %d\n", strlen1(niz));
  printf("Dolzina 2: %d\n", strlen2(niz));
  printf("Dolzina 3: %d\n", strlen3(niz));
}
