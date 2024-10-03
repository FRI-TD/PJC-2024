#include <stdio.h>

typedef struct {
  int magic;
  short minor;
  short major;
} class_file_header;

unsigned short swap16(unsigned short x) {
  return (x << 8) | (x >> 8);  // ABCD << 8 = CD00
}

unsigned int swap32(unsigned int x) {
  return swap16(x & 0x0000FFFF) << 16 | swap16(x >> 16);
}

int main() {
  class_file_header header;

  FILE *f = fopen("viri/Test.class", "rb");
  if (f != NULL) {
    if (fread(&header, sizeof(class_file_header), 1, f) > 0) {
      printf("Magic: %X\n", swap32(header.magic));
      printf("Major: %X\n", swap16(header.major)); 
	} else
	  printf("Napaka pri branju\n");

	fclose(f);

  } else {
	printf("Napaka pri odpiranju\n");
  }
 
 }
