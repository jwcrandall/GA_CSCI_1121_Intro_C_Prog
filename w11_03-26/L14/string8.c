#include <stdio.h>
int main(void){
  char str[100];
  fgets(str, sizeof(str), stdin);
  printf(str);
  return 0;
}
