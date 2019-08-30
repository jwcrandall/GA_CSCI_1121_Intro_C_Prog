#include <stdio.h>
#include <string.h>
//define simple strucutre
struct{
  unsigned int widtheValidated;
  unsigned int heightValidated;
}status1;
//define a structure with bit fields
struct{
  unsigned int widthValidated : 1;
  unsigned int heightValidated : 1;
}status2;
int main(){
  printf("Memory size used by status1:%lu\n", sizeof(status1));
  printf("Memory size used by status2:%lu\n", sizeof(status2));
  return 0;
}

