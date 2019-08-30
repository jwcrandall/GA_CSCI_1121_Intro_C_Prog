#include <stdio.h>
#include <stdlib.h>
int main()
{
  srand(time(NULL));
  double p;
  printf("Enter the number: \n");
  scanf("%lf", &p);
  double q;
  int n =1;

  q = (double)rand();
  while(q >= p)
  {
  n++;
  q = (double)rand();
  }
  printf("N: %i \n", n);
}
