#include <stdio.h>

// v zanki rezultatu y-krat pristeje x
int produkt(int x, int y) {
  
  asm(".intel_syntax noprefix\n" 

      "       xor eax, eax          \n"
      "LOOP:  add eax, ebx          \n"
	  "       sub ecx, 1            \n"
	  "       cmp ecx, 0            \n"
	  "       jg  LOOP              \n"

	:   /* output */
	: "b" (x), "c" (y)   /* input:  ebx = x, ecx = y */
	: 
  );
}

int main() {
  printf("%d\n", produkt(5,6));
}
