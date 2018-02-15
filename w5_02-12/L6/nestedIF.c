#include <stdio.h>
int main(){
  int num;
  printf("Type a number: ");
  scanf("%d", &num);
  if( num%6==0 && num%9==0){
    printf("Number is divisible by both 6 and 9");
  }
  else if( num%9==0){
    printf("Number is divisible by 9");
  }
  else if(num%6==0){
    printf("Number is divisible by 6");
  }
  else{
    printf("Number is divisible by none");
  }
return 0;
}

