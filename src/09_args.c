#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **args, char **env) {
  char *drugi = args[1] + strlen(args[1]) + 1;
  printf("%s\n", drugi);

  for(int i=1; i<argc; i++) 
	printf("%p\n", args[i]);

  printf("\n------------------\n");
  char *blok = args[0];
  for(int i=0; i<100; i++) {
    printf("%c", blok[i] < 32 ? '?' : blok[i]);
  }
  printf("\n------------------\n");

  /*
  for(int i=0; i<10; i++) {
	printf("%s\n", env[i]);
  }
  */
  printf("PATH=%s\n", getenv("PATH"));
}
