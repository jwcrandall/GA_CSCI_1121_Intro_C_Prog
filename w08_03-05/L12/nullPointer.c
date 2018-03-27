#include<stdio.h>
int main (void){
  int *ptr;
  printf("Addr = %p\n", ptr);
  ptr = NULL;
  printf("Addr = %p\n", ptr);
  return 0;
}
