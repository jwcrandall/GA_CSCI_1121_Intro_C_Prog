#include <stdio.h>
int main(void){
  int *ptr, arr[] = {10,20,30,40,50};
  ptr = arr;
  *ptr = 3;
  ptr += 2;
  *ptr = 5;
  printf(" %d\n", arr[0]+arr[2]);
  return 0;
}
