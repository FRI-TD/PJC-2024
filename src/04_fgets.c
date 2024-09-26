#include <stdio.h>
#include <string.h>

#define MAX 1024

int main() {
  FILE *f    = fopen("viri/besedilo.txt", "r");
  FILE *fout = fopen("viri/besedilo_ostevilceno.txt", "a");

  if (f != NULL && fout != NULL) {

    char buffer[MAX];

	int i=0;int izpis=1;
    while (!feof(f)) {
	  // preberi vrstico
	  if (fgets(buffer, MAX, f) != NULL) {
		if (izpis == 1) {
		  fprintf(fout, "%d.", i++);
		  izpis = 0;
		}
  	    fprintf(fout, "%s", buffer);
		if (buffer[strlen(buffer)-1] == '\n')
		  izpis = 1;
	  }
    }
    fclose(f);
	fclose(fout);
  } else {
	printf("Datoteka ne obstaja!\n");
  }
}
