#include <stdio.h>
struct student{
  char *name;
  float *avg_grd;
};
int main(void){
  float grd = 8.5;
  struct student s1, s2;
  s1.name = "somebody";
  s1.avg_grd = &grd;
  printf("%s %.2f\n", s1.name+3, *s1.avg_grd);
  s2 = s1;
  grd = 3.4;
  printf("%s %.2f\n", s2.name, *s2.avg_grd);
  return 0;
}
