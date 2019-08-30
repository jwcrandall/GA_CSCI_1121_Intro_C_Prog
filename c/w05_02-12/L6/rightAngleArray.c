#include <stdio.h>
int main(){
  int rows, p, q, num = 1;
  printf("Enter integer number of rows to print triangle:");
  scanf("%d", &rows);
  for(p=1 ; p <= rows ; p++){
    for (q=1 ; q<= p; q++){
      printf(" %d ", num);
      num++;
    }
    printf("\n");
  }
  return 0;
}
