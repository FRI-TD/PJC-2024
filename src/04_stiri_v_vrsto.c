
char plosca[7][7];

int preveriVse() {
  // igralec je postavil znak 'znak' na i,j
  if (preveri(i, 0,   0,  1, znak))  // vrstica
	printf("vodoravno");
  if (preveri(0, j,   1,  0, znak))  // stolpec
	printf("navpicno");
  if (preveri(0, j-i, 1,  1, znak))  // leva diagonala
	printf("diagonala");
  if (preveri(0, j+i, 1, -1, znak))  // desna diagonala
	printf("diagonala");
}

int v(int z) {
  return (z>=0) && (z<7);
}

int preveri(int zi, int zj, int di, int dj, char znak) {
  int count=0; // stevilo zaporednih znakov
  for(int k=0; k<7; k++) {
    if (v(zi + di*k) && v(zj + dj*k) &&
        (plosca[zi + di*k][zj + dj*k] == znak)) {
	  count++;
	  if (count == 4) return 1;
	} else {
	  count=0;
	}
  }
  return 0;
}

