#include <stdio.h>
int test(int x, int y);
int main(void){
  int sum, a=10, b=20;
  sum = test(a,b); //The variables a and b become the function arguments
  printf("%d\n", sum);
  return 0;
}
int test(int x, int y){
  return x+y;
}

