#include <stdio.h>
#include <string.h>

// vrne dolzino niza
int dolzina(char niz[]) {

  for(int i=0; ; i++) {
	if (niz[i]=='\0') return i;
  }
}

int main() {

  char niz1[] = "abc";
  char niz2[] = "defgh";
  int s = sizeof(niz1);
  printf("Dolzina niza '%s' je %d\n", niz1, dolzina(niz1));


  char n1[] = "xyz";
  char n2[] = "xyz";
  if (n1 == n2) printf("Sta ista\n"); else printf("Sta razlicna\n");

  if (strcmp(n1,n2)==0) printf("Sta enaka\n"); else printf("Sta razlicna\n");

  strcpy(niz2, niz1);
  printf("%s\n", niz2);
  niz2[3]='x';
  printf("%s\n", niz2);
} 
