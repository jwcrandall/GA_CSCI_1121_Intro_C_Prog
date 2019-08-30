#include <stdio.h>
int main(void){
  int *ptr, arr[] = {10,20,30};
  ptr = &arr[0];
  printf("Addr:%d\n", ptr);
  ptr = ptr+2;
  printf("Addr:%d Value is %d\n", ptr, *ptr);
  return 0;
}
