#include <stdio.h>
int main (){
  int count, num, add=0;
  printf("Input a positive number\n");
  scanf("%d", &num);
  for(count=1; count <= num; count++){
    add += count;
    //If add is greater than 67 break statement terminates the loop
    if(add > 67){
      printf("When add is > 67, the loop termiantes.\n");
      break;
    }
  }
  if(count > num){
    printf("Add integers from 1 to %d = %d", num , add);
  }
}
