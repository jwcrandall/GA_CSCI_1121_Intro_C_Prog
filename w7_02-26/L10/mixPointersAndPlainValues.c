#include <stdio.h>
void test(int *p, int a);
int main(void){
  int i = 100, j = 200;
  test(&i, j);
  printf("%d %d\n", i,j);
  return 0;
}
void test(int *p, int a){
  *p = 300;
  a = 400;
}
