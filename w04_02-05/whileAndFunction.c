#include<stdio.h>
int low(int d);
int main (void){
  int d;
  while((d=getchar())!=EOF){
    putchar(low(d));
  }
}
int low(int d){
  return d >= 'A' && d <= 'Z'? d + 'a'-'A':d;
}
