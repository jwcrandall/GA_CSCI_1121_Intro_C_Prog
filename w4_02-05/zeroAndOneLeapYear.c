#include <stdio.h>
int main(){
  char feb;
  int days;
  printf("Enter 0 if the year is not a leap year otherwise enter 1: ");
  scanf("%c",&feb);
  days=(feb=='0')?28:29;
  //If (feb=="I") is true, days equal to 29, otherwise 28
  printf("Number of days in February= %d\n", days);
  return 0;
}
