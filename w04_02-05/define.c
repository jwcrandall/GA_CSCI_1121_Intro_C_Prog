/* write a program that reads the radius of a circle and displays its area of the circle*/
#include <stdio.h>
#define PI 3.142
int main(void){
  double radius;
  printf("Enter radius: ");
  scanf("%lf", &radius);
  printf("The area of circle is %.2f\n", PI*radius*radius);
  return 0;
}
