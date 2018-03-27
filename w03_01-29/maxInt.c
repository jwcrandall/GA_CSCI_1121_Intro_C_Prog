#include <stdio.h>
int max(int n1, int n2);
int main(){
  int a = 7;
  int b = 9;
  int num;
  num = max(a,b); //calling a function to find max number
  printf( "Max number is %d.\n", num );
  return 0;
}
int max(int n1, int n2){
  int result;
  if (n1 > n2)
    result = n1;
  else
    result = n2;
  return result;
}
