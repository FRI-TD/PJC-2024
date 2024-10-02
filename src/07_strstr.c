#include <stdio.h>
#include <string.h>

int main() {
  char *niz = "abc def xyz";
  char *z = niz;
  while ((z = strstr(z, " ")) != NULL) {
    printf("%s\n", z);
	z++;
  }
}
