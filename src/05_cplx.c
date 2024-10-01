

/* 
struct kompleksno {
  double im;
  doubdle re;
};
typedef struct kompleksno cplx;

struct kompleksno w; // kompleksno stevilo

cplx z; // kompleksno stevilo

*/
#include <stdio.h>

typedef struct {
  double re;
  double im;
} cplx;

int main() {
  cplx w;
  w.re = 5;
  w.im = 4;
  printf("%.2f + %.2f i\n", w.re, w.im);

  cplx z = {2,4};
  printf("z = %.2f + %.2f i\n", z.re, z.im);

  cplx x = {.im=7};
  printf("x = %.2f + %.2f i\n", x.re, x.im);

}


