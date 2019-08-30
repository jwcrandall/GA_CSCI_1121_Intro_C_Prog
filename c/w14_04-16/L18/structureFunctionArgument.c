#include <stdio.h>
#include <string.h>
struct student{
  char name[50];
  int code;
  float grd;
};
void test(struct student *ptr);
int main(void){
  struct student stud = {"somebody",20,5};
  test(&stud);
  printf("N:%s C:%d G:%.2f\n", stud.name, stud.code, stud.grd);
  return 0;
}
void test(struct student *ptr){
  strcpy(ptr ->name, "new_name");
  ptr -> code = 33;
  ptr -> grd = 77;
}
