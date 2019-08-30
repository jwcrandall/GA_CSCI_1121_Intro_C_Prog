#include <stdio.h>
int main(void){
  int *ptr, i, arr[5] = {10,20,30,40,50};
  ptr = arr;
  for(i = 0; i < 5; i++){
    printf("Addr=%p Value=%d\n", &ptr[i], ptr[i]);
  }
  return 0;
}


