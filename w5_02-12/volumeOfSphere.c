#include <stdio.h>
#define PI 3.14

int main(void){
  //Declare variables
  double r, volume;
  printf("Enter the radius r of the sphere: \n");
  scanf("%lf",&r);
  //Compute the volume of the sphere
  volume = (4.0/3.0)*PI*r*r*r;
  //Print the volume
  printf("The volume of a sphere with radius %4.2f is %4.2f \n", r, volume);
  //Exit program
  return 0;
}
