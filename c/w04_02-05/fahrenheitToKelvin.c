#include <stdio.h>
int main(void){
  //Define and initialize the variables
  double farenheit = 0, increment =0, kelvin;
  //Prompt the user for increment.
  while (increment <= 0)
  {
    printf("Enter increment for table:");
    scanf("%lf", &increment);
  }
  //Print the title and the table.
  printf("Farenheight to Kelvin \n");
  do{
    kelvin = (5.0/9.0)*(farenheit + 459.67);
    printf("%4.2f F   %4.2f K \n", farenheit, kelvin);
    farenheit += increment;
  }
  while (farenheit <= 200.0);
  //Exit program
  return 0;
}
