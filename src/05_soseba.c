#include <stdio.h>

#define N 3

struct oseba {
  char ime[10];
  char priimek[10];
  int starost;
};

int main() {
 
  struct oseba o[N];

  for(int i=0; i<N; i++) {
    printf("Vpisi ime %d: ", i+1);
    scanf("%s", o[i].ime);

    printf("Vpisi priimek %d: ", i+1);
    scanf("%s", o[i].priimek);
 
    printf("Vpisi starost %d: ", i+1);
    scanf("%d", &o[i].starost);
  }

  printf("Oseba: %s %s, %d\n", o[0].ime, o[0].priimek, o[0].starost);
}
