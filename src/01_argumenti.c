#include <stdio.h>

int main(int argc, char*args[]) {
	printf("Stevilo argumentov: %d\n", argc);

	for (int i=0; i<argc; i++) {
		printf("Argument %d: %s\n", i, args[i]);
	}
}