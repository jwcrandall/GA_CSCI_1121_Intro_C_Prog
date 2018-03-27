#include <stdio.h>
int main(void)
{
  int *ptr, arr[5];
  ptr = arr;
  printf("%p %p %p %p\n", ptr, &arr[0], arr, &arr);
  return 0;
}
