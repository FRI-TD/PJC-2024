#include <stdio.h>

void bubble_sort(int *t, int n) {
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

void insertion_sort(int *t, int n) {
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

typedef void urediFunkcija(int *, int);

int main() {
  int n=10;
  int tab[] = {3,4,8,1,2,0,8,4,3,6};

  printf("Izberi funkcijo za urejanje: 1 ... bubble sort, 2 ... insertion sort\n");
  int i;
  scanf("%d", &i);

  urediFunkcija *uredi;
  if (i==1) uredi=bubble_sort; else uredi=insertion_sort;
  uredi(tab, n);

  qsort

  for(int i=0; i<n;i++) {
    printf("%d ", tab[i]);
  }
  printf("\n");
}
