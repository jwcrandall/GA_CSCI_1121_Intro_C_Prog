#include <stdio.h>
int test(void);
int main(void){
  int sum;
  sum = test();
  printf(" %d\n", sum);
  return 0;
}
int test(void){
  int i = 10, j = 20;
  return i+j;
}

