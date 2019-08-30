#include <stdio.h>
#include <string.h>
struct book{
  char title[100];
  int year;
  float price;
};
int main(void){
  char *ptr1;
  int *ptr2;
  float *ptr3;
  struct book b;
  strcpy(b.title, "C Programming Language ");
  b.year = 2016;
  b.price = 14.75;
  ptr1 = b.title;
  ptr2 = &b.year;
  ptr3 = &b.price;
  printf("%s %d %.2f\n", ptr1, *ptr2, *ptr3);
  return 0;
}

