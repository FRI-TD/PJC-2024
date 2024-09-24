#include <stdio.h>
#include <string.h>

int main() {
  int starost;
  char ime[10];
  

  printf("Vpisi starost: ");
  scanf("%d", &starost);
  gets(ime);

  printf("Vpisi ime:");
  gets(ime);

  printf("Pozdravljen %s, star si %d let.\n", ime, starost);
} 
