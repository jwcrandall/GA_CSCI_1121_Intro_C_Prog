#include <stdio.h>
#include <math.h>
int main(){
  int a, b, c;
  double P;
  printf("Enter the value of the first censor: ");
  scanf("%i", &a);
  printf("Enter the value of the second censor: ");
  scanf("%i", &b);
  printf("Enter the value of the third censor: ");
  scanf("%i", &c);

    P = ((a+b+c)/40*3)*100;

    if (P<=7) {
      printf("The machine is running idle");
    }else if (P<=23) {
      printf("The machines is malfunctioning\n");
    }else if (P>=42) {
      printf("The machines is overheated\n");
    } else {
      printf("The machines is operating normally\n");
    }
}
