#include <stdio.h>
int main(){
  double number;
  printf("Key-in a number: ");
  scanf("%lf", &number);
  //T if number < 0
  if(number < 0.0){
    printf("You keyed-in a negative number.");
  }
  //T is number > 0
  else if (number > 0.0){
    printf("You keyed-in a positive number.");
  }
  //If both test expression is evaluated to false
  else{
    printf("You keyed-in 0.");
  }
  return 0;
}
