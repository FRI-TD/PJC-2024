#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void bubble_sort(int t[], int n) {
  for(int i=0; i<n-1; i++) {
    for(int j=0; j<n-1-i; j++) {
	  if (t[j] > t[j+1]) {
		int tmp = t[j];
		t[j]    = t[j+1];
        t[j+1]  = tmp;
	  }
	}
  }
}

void insertion_sort(int t[], int n) {
  int i = 1; // do kam je tabela ze urejena (vse kar je levo od i je urejeno)
  while (i < n) {
    int k = i;
	while ((k>0) && (t[k] < t[k-1])) {
		int tmp = t[k];
		t[k]    = t[k-1];
        t[k-1]  = tmp;
	    k--;
	}
	i++;
  }
}


void napolni_tabelo(int t[], int n) {
  for(int i=0; i<n; i++)
	t[i] = rand() % 100;
}

void izpisi_tabelo(int t[], int n) {
  for(int i=0; i<n; i++)
	printf("%d ", t[i]);
  printf("\n");
}

int main() {
  int n = 100000;
  int tab[n];
  napolni_tabelo(tab, n);
  // izpisi_tabelo(tab,n);

  //for(int i=0; i<n; i++) tab[i] = n-i;

  clock_t start, end;
  start = clock();
  bubble_sort(tab, n);
  end = clock();

  double porabljen_cas = 1.0*(end - start) / CLOCKS_PER_SEC;
  printf("Za urejanje %d stevil bubble sort potrebuje %.2f sekund\n", n, porabljen_cas);
  //izpisi_tabelo(tab,10);
}
