#include <stdio.h>
#include <string.h>

extern char kljuc[10];

int main() {
  char beseda[10]; // kodiramo do 10 znakov

  strcpy(kljuc, "test");

  printf("Vpisi besedilo: ");
  scanf("%s", beseda);

  int len = strlen(beseda);

  kodiraj(beseda, len);
  printf("Zakodirano: '%s'\n", beseda);

  kodiraj(beseda, len);
  printf("Odkodirano: '%s'\n", beseda);
}
