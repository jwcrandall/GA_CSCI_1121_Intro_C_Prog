#include <stdio.h>
int main(){
  int a, b, c, d, x;
  printf("Enter four numbers that are in a ascending numbers: ");
  scanf("%i %i %i %i", &a, &b, &c, &d);
  printf("Enter a value x: ");
  scanf("%i", &x);

  if ((a <= x && x < b) || (c < x && x < d)) {
    printf("%i belongs to the interval\n", x);
  }
  else
  {
  printf("Invalid output\n");
  }

}
