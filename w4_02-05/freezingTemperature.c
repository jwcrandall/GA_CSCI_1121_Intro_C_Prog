#include <stdio.h>
#include <math.h>
int main(void){
  //Declare variables
  double a, f_a, b, f_b, c, f_c;
  //Get user input from the keyboard
  printf("Use ppt for salinity values. \n");
  printf("Use degrees F for temperatures. \n");
  printf("Enter first salinity and freezing temperature: \n");
  scanf("%lf  %lf", &a, &f_a);
  printf("Enter second salinity and freezing termperature: \n");
  scanf ("%lf %lf", &c, &f_c);
  printf("Enter new salinity: \n");
  scanf("%lf", &b);
  //use linear interpolation to compute new freezing temperature.
  f_b = f_a + (b-a)/(c-a)*(f_c - f_a);
  //print new freezing temperature
  printf("New freezing termperatire in degrees F: %4.1f \n",f_b);
  return 0;
}
