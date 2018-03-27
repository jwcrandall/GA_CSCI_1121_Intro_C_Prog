#include <stdio.h>
#define SIZE 10
void sel_sort(double arr[]);
int main(void){
  int i;
  double grd[SIZE];
  for(i=0;i<SIZE;i++){
    printf("Enter grade of stud_%d: ", i+1);
    scanf("%lf", &grd[i]);
  }
  return 0;
}
void sel_sort(double arr[]){
  int i,j;
  double tmp;
  for(i = 0 ; i < SIZE-1 ; i++){
    for(j = i=1; j < SIZE; j++){
      if(arr[i] > arr[j]){
        //Swap Values
        tmp=arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
      }
    }
  }
}
