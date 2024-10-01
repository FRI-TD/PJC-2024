#include <stdio.h>

int sestej(int x, int y) {
  while (y != 0) {
    int c = x & y;  // problematicna mesta
    x = x ^ y;      // "sestejem" brez problematicnih mest
    y = c << 1;     // problematicna mesta poravnam
  }
  return x;
}

int main() {
  int x=15;
  int y=-17;

  printf("%d + %d = %d\n", x, y, sestej(x,y));
}

