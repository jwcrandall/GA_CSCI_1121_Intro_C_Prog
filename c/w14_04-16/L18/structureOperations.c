#include <stdio.h>
struct student{
  int code;
  float grd;
};
int main(void){
  struct student s1, s2;
  s1.code = 1234;
  s1.grd = 6.7;
  s2 = s1; //Copy the structure
  printf("C: %d G:%.2f\n", s2.code, s2.grd);
  return 0;
}

