#include <stdio.h>
#define CM_PER_INCH 2.54
int main (void){
  //Declare and initialzie variables
  double cm=0, inches=0, increment = 2;
  //Print table title, then the values
  printf("Inches to Centimeters\n");
  while(inches <= 40.0){
    cm = inches*CM_PER_INCH;
    printf("%6.2f %10.2f\n", inches,cm);
    inches += increment;
  }
return 0;
}
