#include <stdio.h>
int main(void){
  void *ptr;
  char s[]="abcd";
  int i = 10;
  ptr = &i;
  *(int*)ptr += 20;
  printf("%d\n", i);
  ptr = 2+s;
  (*(char*)ptr)++;
  printf("%s\n",s);
  return 0;
}
