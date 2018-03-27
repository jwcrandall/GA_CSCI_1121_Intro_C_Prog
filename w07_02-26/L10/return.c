#include <stdio.h>
int main(void){
  int num;
  while(1){
    printf("Enter number: ");
    scanf("%d", &num);
    if(num == 2){
      return 0; //Terminate the program
    }
    else{
      printf("Num = %d\n", num);
    }
  }
  return 0;
}
