#include <stdarg.h>
#include <stdio.h>

int print(int param, ...) {
  va_list arg_list;
  int my_arg;

  va_start(arg_list, param);
  for(my_arg=param; my_arg != 0; my_arg = va_arg(arg_list, int)) {
    printf("%d\n", my_arg);
  }
  va_end(arg_list);
}


int main() {
  print(5,7,2,3,8,0);
}
