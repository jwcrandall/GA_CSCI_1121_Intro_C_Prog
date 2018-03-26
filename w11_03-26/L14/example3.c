#include <stdio.h>
#include <string.h>
int main(void){
  char str[10] = {0};
  printf(" %c\n", *(str+strlen(strncpy(str,"sample1",6))/2));
  return 0;
}
