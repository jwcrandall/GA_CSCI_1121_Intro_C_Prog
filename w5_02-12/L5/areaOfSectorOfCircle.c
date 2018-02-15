#include <stdio.h>
int main(void){
  //Declare variables
  double beta, r, area;
  //Enter the radii and the angle beta between them
  printf("Enter the radii and angle beta [radians]: \n");
  scanf("%lf %lf", &r, &beta);
  //Compute the area of the sector
  area = (r*r*beta )/2.0;
  //Print the value of the area
  printf("The area of the sector is %4.3f \n", area);
  //Exit program
  return 0;
}
