#include <stdio.h>
int main (void){
  int *ptr, a;
  ptr = &a;    //ptr " points to" the memory address of a
  printf("Address=%p\n", ptr); // Display the memory address of a
  return 0;
}

