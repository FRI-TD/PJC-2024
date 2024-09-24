#include <stdio.h>

// beri stevila, ki jih vpise uporabnik
// konec branja: 0
// na koncu izpisi povprecje prebranih stevil

int main() {
  int x;
  int vsota = 0;
  int n     = 0;  // stevilo prebranih stevil


  do {
    scanf("%d", &x); // branje enega stevila v spremenljivko x
	if (x != 0) {
	  vsota += x;
	  n++;
	}
  } while (x != 0);

  printf("Povprecje %d prebranih stevil je %.2f\n", n, 1.0*vsota/n);
}
