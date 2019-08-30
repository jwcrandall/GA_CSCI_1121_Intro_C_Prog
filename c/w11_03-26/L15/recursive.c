#include<stdio.h>
void show(int num);
int main(void){
  int i;
  printf("Enter a number: ");
  scanf(" %d", &i);
  show(i);
  return 0;
}
void show(int num){
  if(num > 1){
    show(num-1);
  }
  printf("value = %d\n",num);
}
