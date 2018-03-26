#include<stdio.h>
int main(void){
  char *str = "this";
  for(; *str; printf("%s ", str++));
  return 0;
}
