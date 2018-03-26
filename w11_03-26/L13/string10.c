#include <stdio.h>
int main(void){
  char *p, *q, s[] = "play";
  p = s+1;
  q = s;
  p[1] = 'x';
  *s = 'a';
  printf(" %d %c\n", *q+2, *(q+2));
  return 0;
}
