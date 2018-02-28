#include <stdio.h>
int main(){
  int num;
  printf("Type a number: ");
  scanf("%d", &num);
  if( num%6==0 && num%9==0){
    printf("Number is divisible by both 6 and 9\n");
  }
  if( num%9==0){
    printf("Number is divisible by 9\n");
  }
  if(num%6==0){
    printf("Number is divisible by 6\n");
  }
  else{
    printf("Number is divisible by none\n");
  }
return 0;
}

