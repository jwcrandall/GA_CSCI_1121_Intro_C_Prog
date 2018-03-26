#include <stdio.h>
int main (void){
  char ch;
  int i;
  printf("Enter number: ");
  scanf("%d", &i);
  printf("Enter character: ");
  scanf(" %c", &ch);
  printf("Int = %d and Char = %c\n", i, ch);
  return 0;
}
