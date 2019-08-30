#include <stdio.h>
int main(){
  //Addition of even numbers
  int count, num, add =0;
  printf("Input a positive number\n");
  scanf("%d", &num);
  for(count =1; count <= num; count++){
    //Use continue statement to skip odd numbers
    if(count%2 == 1){
      continue;
    }
    add += count;
  }
  printf("Add all even numbers between 1 to %d = %d", num, add);
  return (0);
}
