#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void){
  int a, num;
  srand(time(NULL));
  for(a = 0; a < 7; a++){
    num = rand();
    printf(" %d\n", num);
  }
  return 0;
}
