#include <stdio.h>
#define FT_PER_MI 5280
#define SEC_PER_HOUR 3600
int main(void){
  //Define and initialize variables
  int fps = 0, increment = 10;
  double mph = 0;
  //Print titles and table
  printf("Feet/second to Miles/hour \n");
  while (fps <= 200){
    mph = (double)fps * SEC_PER_HOUR/FT_PER_MI;
    printf("%5i    %.3f\n",fps,mph);
    fps += increment;
  }
return 0;
}
