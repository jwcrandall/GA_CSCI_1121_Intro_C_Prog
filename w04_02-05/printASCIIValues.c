#include<stdio.h>
main(){
  int i;
  char ch;
  for (i=0; i<256; i++){
    printf("%c ", ch);
    ch = ch + 1;
  }
}
