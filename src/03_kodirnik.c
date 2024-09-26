#include <string.h>

char kljuc[10];

void kodiraj(char besedilo[], int len) {
  for(int i=0; i<len; i++)
	besedilo[i] = besedilo[i] ^ kljuc[i % strlen(kljuc)];
}
