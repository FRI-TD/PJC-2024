#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[]) {
	if (argc != 3) {
		printf("Napaka, podaj dva argumenta.\n");
		return 0;
	}
	
	int x = atoi(args[1]);
	int y = atoi(args[2]);

	printf("%d + %d = %d\n", x, y, x+y);
}