#include <stdio.h>
#include <string.h>
               
int string2int(char niz[]) {
  int r = 0;
  for(int i=0; i<strlen(niz); i++) {
	// '0'==48, '1'==49, '2'==50, ...

	            //  '3' - '0' = 51 - 48 = 3
    int stevka = niz[i] - '0';
	r = 10*r + stevka;
  }

  return r;
}

int main() {
  char stevilo[] = "315";
  printf("'%s' = %d\n", stevilo, string2int(stevilo));
 
  return 0;
}
