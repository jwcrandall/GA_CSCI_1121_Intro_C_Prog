#include <stdio.h>
int main(){
  int m,n;
  char ch;
  //clrscr();
  y:printf("Key-in two numbers: ");
  scanf("%d%d", &m,&n);
  printf("The first number is %d\n",m);
  printf("The second number is %d\n",n);
  printf("The addition of the two numbers is: %d+%d=%d\n",m,n,m+n);
  printf("\n Would you like to do more additions? Type Yes or NO ");
  scanf(" %c",&ch);
  if(ch=='y'){
    goto y;
  }
  else if (ch == 'n'){
    goto n;
  }
  else{
    printf("Invalid selecton. Please type y for 'yes' and n for 'n");
  }
  n:printf("Thank you for exiting!");
}
