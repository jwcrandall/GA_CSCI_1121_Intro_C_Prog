#include <stdio.h>
int unknown(int num1, int num2);
int main(void){
  int num1, num2, sign;
  printf("Enter numbers: ");
  scanf("%d%d", &num1, &num2);
  sign = 1;
  if((num1 < 0) && (num2 > 0)){
    num1 = -num1;
    sign = -1;
  }
  else if((num1  > 0) && (num2 > 0)){
    num2 = -num2;
    sign = -1;
  }
  else if((num1 < 0) && (num2 < 0)){
    num1 = -num1;
    num2 = -num2;
  }
  if(num1 > num2){
    printf("%d\n", sign*unknown(num1,num2));
  }
  else{
    printf("%d\n", sign*unknown(num2, num1));
  }
  return 0;
}
int unknown(int n1, int n2){
  if(n2 == 1){
    return n1;
  }
  else{
    return n1 + unknown(n1, n2-1);
  }
}

