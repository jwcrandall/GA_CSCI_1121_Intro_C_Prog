#include <stdio.h>
int main(){
  int n,c,k;
  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);
  printf("The integer %d in binary number system is:\n" , n);
  for (c=31; c>=0; c--){
    k = n >> c; //number is shifted by 1 bit
    if (k & 1) //it is either 1 or 0 depending on the least significant bit of k: if the last bit is 1, the result of k & 1 is 1; otherwise, it is 0. This is a bitwise AND operation.
      printf("1");
    else
      printf("0");
  }
  printf("\n");
  return 0;
}
