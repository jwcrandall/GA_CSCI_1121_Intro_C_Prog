#include <stdio.h>
void test(void);
int main(void){
  printf(" Call 1 ");
  test();
  printf(" Call 2 ");
  test();
  return 0;
}
void test(void){
  int i; //Funciton Body
  for(i = 0; i < 2; i++){
    printf(" In ");
  }
}

