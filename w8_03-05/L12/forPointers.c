#include <stdio.h>
int main(void){
  int *ptr, a;
  a = 10;
  ptr = &a;
  printf(" value = %d\n", *ptr);
  return 0;
}
