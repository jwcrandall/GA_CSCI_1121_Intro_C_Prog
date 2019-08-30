#include<stdio.h>
int main(){
  char oper;
  float num1,num2;
  printf("Input two numbers : \n");
  scanf("%f%f", &num1, &num2);
  printf("Input an operator (+ - * /)\n");
  scanf("%*c%c",&oper);
  switch(oper){
    case '+':
      printf("%.1f + %.1f = %.1f\n", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%.1f - %.1f = %.1f\n", num1, num2, num1-num2);
      break;
    case '*':
      printf("%.1f - %.1f = %.1f\n", num1, num2, num1* num2);
      break;
    case '/':
      printf("%.1f / %.1f = %.1f\n", num1, num2, num1/num2);
      break;
    default:
      printf("PROBLEM: CANNOT SOLVE");
  }
  return 0;
}
