#include <stdio.h>
int main(){
  int i;
  double num, add = 0.0;
  for(i=1; i <= 5; ++i){
    printf("Enter number %d: ", i);
    scanf("%lf", &num);
    //When users enters negative number, the loop terminates
    if(num < 0.0){
      continue;
    }
    add += num;
  }
  printf("Sum = %.2lf", add);
  return 0;
}
