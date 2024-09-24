#include <stdio.h>
#include <string.h>

int main() {

  char niz0[] = "123";
  char niz1[] = "abc";
  char niz2[] = "defgh";
  char niz3[] = "456";
 
  printf("niz0: %s\n", niz0);
  printf("niz1: %s\n", niz1);
  printf("niz2: %s\n", niz2);
  printf("niz3: %s\n", niz3);

  strcpy(niz1, niz2);

  printf("niz0: %s\n", niz0);
  printf("niz1: %s\n", niz1);
  printf("niz2: %s\n", niz2);
  printf("niz3: %s\n", niz3);  
} 
