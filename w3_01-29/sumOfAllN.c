#include <stdio.h>
int main(){
  int grades[10],p,n,sum=0;
  printf("Enter number of students: ");
  scanf("%d", &n);
  for(p=0; p<n; ++p){
    printf("Enter student grades %d: ",p+1);
    scanf("%d", &grades[p]);
    sum += grades[p]; 
  }
  //(step size += add AND assignment operator. It adds the right operand to the left   operand and assign the result to the left operand).
  printf("Sum = %d \n", sum);
  return 0;
}

