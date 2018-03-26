#include <stdio.h>
int main(void){
  char str[100];
  int num;
  printf("Enter number: ");
  scanf("%d", &num);
  printf("Enter text: ");
  fgets(str, sizeof(str), stdin);
  printf("%d %s\n", num, str);
  return 0;
}
