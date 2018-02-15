#include <stdio.h>
#define PI 3.141
int main (void){
  //Declare and initizalize variables
  int degrees =0;
  double radians;
  //Create a loop for degrees to radians
  printf("Degrees to radians \n\n");
  do {
    radians = degrees * PI/180;
    printf("%7i %10.3f \n", degrees, radians);
    degrees += 30; 
  }while (degrees <= 360);
return 0;
}
