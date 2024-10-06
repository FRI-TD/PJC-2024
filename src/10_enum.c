#include <stdio.h>

//        0    1   2  3    4   5   6
enum DAN {Ne, Po, To, Sr, Ce, Pe, So}; 

enum POT {ena=1, dva=2, tri=4, stiri=8, pet=16, sest=32};

int main() {
  enum DAN dan;
  dan = Pe;

  printf("%d\n", dan);

  enum POT p;

  p=sest;
  printf("%d\n", p);
}
