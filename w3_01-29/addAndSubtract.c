#include <stdio.h>
//Print addition and subtraction of 2 numbers entered by user
int main(void){
//Declare variables
  int num1;
  int num2;
  int result;
//Print numbers entered by user
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  result = num1 + num2;
  printf("Add %d + %d = %d\n", num1, num2, result);
  result = num1 - num2;
  printf("Subtraction %d - %d = %d\n", num1, num2, result);
  return 0;
}
