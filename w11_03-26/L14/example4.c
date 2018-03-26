#include <stdio.h>
#include <string.h>
int main(void){
  char str[30];
  return !printf("%s\n", strcat(strcpy(strcpy(str,"Water")+5, "melon ref"), "reshment")-5);
}
