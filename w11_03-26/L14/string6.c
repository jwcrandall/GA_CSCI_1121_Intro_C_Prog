#include <stdio.h>
int main(void){
  char str[] = "SampelText";
  str[4] = '\0';
  printf("%s\n", str);
  return 0;
}
