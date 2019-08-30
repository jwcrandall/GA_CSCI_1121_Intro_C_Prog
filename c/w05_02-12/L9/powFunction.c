#include <stdio.h>
#include <math.h>
int main(){
  double base, power, answer;
  printf("Enter a number: ");
  scanf("Enter a power: ");
  scanf("%lf", & power);
  //Compute the power of a number
  answer = pow(base,power);
  printf("The number taken to the power is %.1lf^%.1lf = %.21f", base , power, answer);
  return 0;
}
