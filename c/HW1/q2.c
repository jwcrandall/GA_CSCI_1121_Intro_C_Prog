#include <stdio.h>
int main(){
  int a, even=0, odd=0;

  printf("Enter a integer: \n");
  scanf("%i", &a);
  while (a!=0)
  {
    if (a%2 == 0)
    { even++;
    }
    else
    {
      odd++;
    }
    printf("Enter a integer: \n");
    scanf("%i", &a);
      }
    printf("The number of even numbers is%i, count for odd numbers is%i\n", even, odd);
}
