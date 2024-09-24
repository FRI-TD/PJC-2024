#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  srand(time(NULL));

  // generiraj n razlicnih stevil iz intervala [a,b]

  int n=7;
  int a=1; 
  int b=39;

  int m = b-a+1;    // stevilo vseh stevil iz intervala
  int stevila[m];   // tabela, v katero shranim vsa stevila iz intervala
  for(int i=0; i<m; i++)
	stevila[i] = a + i;

  for(int i=0; i<n; i++) {
	int x = rand() % m;
	printf("%d ", stevila[x]);

	stevila[x] = stevila[--m];
  }
}
