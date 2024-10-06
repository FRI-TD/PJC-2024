#include <stdio.h>

int zamenjaj() {
  int a = 10;
  int b;

  // koda v zbirniku, ki iz a vrednost prepise v b
  asm(".intel_syntax noprefix\n"   
      "mov eax, %1     \n"
	  "mov %0, eax     \n"
	: "=r"(b)   /* output parameters  ... namesto b pisem %0 */
	: "r"(a)    /* input              ... namesto a pisem %1*/
	: "eax"     /* clobbered registers */

  );

  //return b;
}

int main() {
  printf("%d\n", zamenjaj());
}
