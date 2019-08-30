#include <stdio.h>
int a = 6;
int main(void){
  if(a == 0){
    return 0;
  }
  else{
    printf(" %d", a--);
    main();
  }
  return 0;
}
