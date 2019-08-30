#include <stdio.h>
int prime(int);
int main(){
  int x;
  printf("Please enter your input: ");
  scanf("%d", &x);

  int m=1;

  printf("Input: %d\n", x);
  printf("  output:\n");

  for (m=1;m <= x/2; m++)
  {
    if (prime(m)==0 && prime(x-m)==0)
    {
      printf("%d = %d + %d\n", x, m, x-m);
    }
    else
    {
      continue;
    }
  }

}


int prime(int a){
     int i;
     for(i=2;i<=a/2;++i)
     {
       if(a % i == 0)
       {
         return 1;
       }
     }
     return 0;
}
