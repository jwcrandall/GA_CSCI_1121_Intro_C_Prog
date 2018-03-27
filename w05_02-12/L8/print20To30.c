#include<stdio.h>
int main(){
  int m = 20; //Local Variable
  //create a loop for execution
  //Label is used, it is a plain text, above the goto
  loop:do{
    if (m == 22){
    //skip the iteration
      m = m+1;
      goto loop;
    }
    printf("The number m is: %d\n",m);
    m++;
  }
  while(m < 36);
  return 0;
}


