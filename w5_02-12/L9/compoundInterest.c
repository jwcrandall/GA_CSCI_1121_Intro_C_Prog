#include <stdio.h>
#include <math.h>
int main(){
  float principal, rate, year, compint;
  printf("Enter principal: ");
  scanf("%f", &principal);
  printf("Enter rate: ");
  scanf("%f", &rate);
  printf("Enter time in years: ");
  scanf("%f", &year);
  //Compute the compound interest
  compint = principal*((pow((1+rate/100), year)-1));
  printf("Compoind interest is: %.3f\n", compint);
  return 0;
}

