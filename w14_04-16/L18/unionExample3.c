#include <stdio.h>
#include <string.h>
union Data{
  int i;
  float f;
  char str[34];
};
int main(){
  union Data data;
  data.i = 55;
  printf( "data.i: %d\n", data.i);
  data.f = 340.00;
  printf( "data.f : %.3f\n", data.f);
  strcpy( data.str, "C Programming");
  printf( "data.str : %s\n", data.str);
  return 0;
}
