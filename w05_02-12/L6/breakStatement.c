#include<stdio.h>
int main(){
  int z, a;
  printf("Enter a number to find out if it is a prime number: \n");
  scanf(" %d", &z);
  for( a = 2; a<=z-1; a++){
    if(z%a==0){
      printf(" %d is not a prime number.\n", z);
      break;
    }
  }
  if (a == z){
    printf(" %d is a prime number.\n", z);
  }
  return 0;
}
