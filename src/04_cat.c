#include <stdio.h>
#include <string.h>

#define MAX 1024

// izpise vsebino datoteke d na zaslon
void cat(FILE *d) {
  char buffer[MAX];
  while (!feof(d)) {
    if (fgets(buffer, MAX, d) != NULL) {
  	  printf("%s", buffer);
	}
  }
}

int main(int argc, char* args[]) {
  if (argc==1) {// ni argumentov
	cat(stdin);
  } else {
    for(int i=1; i<argc; i++) {
	  FILE *f = fopen(args[i], "r");
      if (f != NULL) {
		cat(f);
		fclose(f);
	  } else {
		printf("cat: %s: No such file or directory\n", args[i]);
	  }
	}
  }
}

