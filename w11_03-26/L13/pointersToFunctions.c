#include <stdio.h>
int test_1(int a, int b);
int test_2(int a, int b);
int test_3(int a, int b);
int main(void){
  int(*ptr[3])(int a, int b);
  int i, j, k;
  ptr[0] = test_1;
  ptr[1] = test_2;
  ptr[2] = test_3;
  printf("Enter numbers: ");
  scanf("%d%d", &i, &j);
  if(i > 0 && i < 10){
    k = ptr[0](i,j); //Call function that ptr[0] points to Optional :k (*ptr[0] (i,j)
  }
  else if (i >= 10 && i < 20){
    k = ptr[1](i,j); //Call function that ptr[1] points to
  }
  else{
    k = ptr[2](i,j); // Call the function that ptr[2] points to
  }
  printf("Val = %d\n", k);
  return 0;
}
int test_1(int a, int b){
  return a+b;
}
int test_2(int a, int b){
  return a-b;
}
int test_3(int a, int b){
  return a*b;
}
