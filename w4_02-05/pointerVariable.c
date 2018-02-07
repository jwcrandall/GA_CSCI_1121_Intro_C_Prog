#include<stdio.h>
int main(void){
  int *ptr, a;
  ptr = &a; /*ptr "points to" the memory address of a. ptr becomes equal or else "points to" the memory address of a.*/
  printf("Address = %p\n", ptr); /* Display the memory adress of a. The %p specifier is used to display the memory adress in hex. */
  return 0;
}
