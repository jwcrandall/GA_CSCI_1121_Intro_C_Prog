#include <stdio.h>
//global variable declaration
int z;
int main(){
  //local variable declaration
  int p, q;
  //initialize variables
  p = 35;
  q = 19;
  z = p + q;
  printf("value of p=%d, q=%d and z=%d\n", p,q,z);
  return 0;
}

