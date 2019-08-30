#include <stdio.h>
#define EUROS_PER_DOLLAR 1.2166
#define DOLLARS_PER_YEN  0.009289
#define POUNDS_PER_DOLLAR 0.5781
int main(void){
  int dollars = 1, number_lines=9;
  double euros, pounds, yen;
  printf("USD to        Euros,        yen,        pounds \n");
  for (dollars = 1; dollars <= number_lines; dollars++){
    euros = (double)dollars*EUROS_PER_DOLLAR;
    yen = (double)dollars/DOLLARS_PER_YEN;
    pounds = (double)dollars*POUNDS_PER_DOLLAR;
    printf("$ %i %10.2f Euros %9.2f Y %7.2f pounds \n", dollars, euros, yen, pounds);
  }
return 0;
}
