#include <stdio.h>
int main(){
  const int max = 5;
  int n;
  double num, ave, sum =0.0;
  for(n=1; n<=max; ++n){
    printf("%d Input a number: ", n);
    scanf("%lf", &num);
  //User inputs negative number, flow of program moves to labeljump
    if(num < 0.0){
      goto jump;
    }
    sum += num; // sum = sum + num
  }
  jump:
  ave = sum/(n-1);
  printf("Sum = %.1f\n", sum);
  printf("Average = %.1ff\n", ave);
  return 0;
}
