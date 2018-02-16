#include<stdio.h>
int main(){
  int base, power;
  long long answer = 1;
  printf("Enter the base of a number: ");
  scanf("%d", &base);
  printf("Enter the power: ");
  scanf("Enter the power: ");
  scanf("%d", &power);
  while(power != 0){
    answer *= base;
    --power;
  }
  printf("The power of the number is %lld", answer);
  return 0;
}

