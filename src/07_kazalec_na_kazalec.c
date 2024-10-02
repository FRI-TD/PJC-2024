#include <stdio.h>

void  povecaj(int **p, int *n) {
  int *q = malloc(2*(*n)*sizeof(int));
  for(int i=0; i<*n ; i++)
	q[i] = p[i];

  *n = 2*(*n);
  *p = q;
}

int main() {
  int n = 100;
  // ustvarim tabelo velikosti 100
  int *p = malloc (n*sizeof(int));  

  // ... napolnim tabelo
  p[0] = 1;
  p[1] = 2;
  // ...

  // ko pridem do p[99] mi zmanjka prostora,
  // tabelo moram povecati
  povecaj(&p, &n);  // p mora pokazati na novo tabelo z 2*n prostora
                  // n se mora povecati na 2*n


}
