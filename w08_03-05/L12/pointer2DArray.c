#include <stdio.h>
int main(void){
  int *ptr1, *ptr2, *ptr3, i=10, j = 20, k = 30;
  ptr1 = &i;
  i = 100;
  ptr2 = &j;
  j = *ptr2 + *ptr1;
  printf("%d\n", j);
  ptr3 = &k;
  k = *ptr3 + *ptr2;
  printf("%d %d %d\n", *ptr1, *ptr2, *ptr3);
  return 0;
}
