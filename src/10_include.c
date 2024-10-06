#include <stdio.h>

#define N 100

#define forever for(;;)

#define min(X,Y) X < Y ? X : Y

#define dprint(expr) printf(#expr"=%f\n", expr)


int main() {
  for (int i=0; i<N; i++) {
     printf("%d\n", i);
  }

  /*
  forever {
	printf("juhuhu\n");
  }
  */

  int a=10;
  int b=15;
#ifdef DEBUG
  printf("izpisem minimum\n");
#else
  printf("min(%d, %d)=%d\n", a, b, min(a++,b--));
#endif

  double x=3.14;
  double y=2;
#ifdef DEBUG
  printf("izpisem povprecje\n");
#endif  
  dprint((x+y)/2);
}
