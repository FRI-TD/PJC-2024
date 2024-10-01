#include <stdio.h>

typedef struct {
  int re;
  int im;
} cplx;


cplx sestej(cplx a, cplx b) {
  cplx r;
  r.re = a.re + b.re;
  r.im = a.im + b.im;
  return r;
}

int main() {
  cplx w = {1,2};  // 1 + 2i

  int *p;
  p = &(w.re);
  printf("%d\n", w.re);
  *p = 10;
  printf("%d\n", w.re);

  cplx z = {3, -1}; // 3 - i

  cplx vsota = sestej(w,z);
  printf("Vsota: %d + %di\n", vsota.re, vsota.im);


  cplx a = {5, 4};
  cplx *pa;
  pa = &a;
  (*pa).re = 7;
  printf("%d\n", a.re);

  pa -> im = 3;  // (*pa).im = 3
}


 
