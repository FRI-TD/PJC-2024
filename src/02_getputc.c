#include <stdio.h>

int main() {
  while (1) {
    int c = getc(stdin);
	if (c=='.') break;
	putc(c, stdout);
  }
}
