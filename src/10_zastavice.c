#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

// v zanki rezultatu y-krat pristeje x
int zastavice(int x, int y) {
  
  asm(".intel_syntax noprefix\n" 
	  "   add ebx, ecx       \n"
	  "   PUSHF              \n"
	  "   POP   EAX          \n"
	:
	: "b" (x), "c" (y)
	: 
  );
}

int main(int argc, char **args) {
  printf("%d\n", zastavice(atoi(args[1]), atoi(args[2])));
}
