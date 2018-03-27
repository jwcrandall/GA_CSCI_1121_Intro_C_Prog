#include <stdio.h>
#define REFOREST_RATE 0.02
#define UNCUT_ACRES 3000
#define MAX_YEARS 10
int main(void){
  int year = 1;
  double forested = UNCUT_ACRES;
  printf("YEAR    FORESTED ACRES AT END OF YEAR\n");
  printf("-------------------------------------\n");
  printf("-------------------------------------\n");
  //Print amount forested for MAX_YEARS
  while (year <= MAX_YEARS){
    forested += REFOREST_RATE*forested;
    printf("%3i        %f\n",year,forested);
    year++;
  }
return 0;
}
