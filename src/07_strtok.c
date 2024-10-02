#include <stdio.h>
#include <string.h>


// ime:geslo:uid:gid:path:shell
// Joze:abc:100:200:/home/joze:/usr/bin/bash
// Miha::200:300:

int main() { //  2   3 4   5  678 9          8
  char niz[] = "::Joze::100:200::::/home/joze:/usr/bin/bash";
  char delims[] = ":";

  int i=0;

  char *result = strtok(niz, delims);
  while (result != NULL) {
    char *back = result;
	int cnt = 0;
	do {
	  back--;
	  if (back < niz) break;
	  cnt++;
	} while (*back == delims[0]);
	i = i + cnt;

    printf("Token %d: %s\n", i, result);
    result =  strtok(NULL, delims);
  }

  printf("Niz: %s\n", niz);
}
