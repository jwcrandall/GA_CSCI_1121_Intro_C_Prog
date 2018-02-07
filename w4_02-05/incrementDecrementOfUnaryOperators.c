#include <stdio.h>
int main(){
  int grade = 20;
  printf("%d\n", grade);
  grade++;
  printf("%d\n", grade);
  ++grade;
  printf("%d\n", grade);
  grade = grade + 1;
  printf("%d\n", grade);
  grade--;
  printf("%d\n", grade);
  --grade;
  printf("%d\n", grade);
  grade = grade -1;
  printf("%d\n", grade);
 
  int x = 5;
  printf(" %d\n\n", x++);
  x = 5;
  printf(" %d\n", ++x);

  return 0;
}
