#include <stdio.h>
int digit_sum(int i){
  int digit_sum = 0;
  while(i>0) {
    int digit = i % 10;
    digit_sum += digit;
    i = i / 10;
  }
  return digit_sum;
}

int digit_product(int i) {
  int digit_product = 1;
  while(i>0) {
    int digit = i % 10;
    digit_product *=digit;
    i = i / 10;
  }
}

int main(){
  int i;
  printf("User enters an integer: ");
  scanf("%d", &i);

  int current_value = i;
  int n = 0;
  while(current_value >= 10)
  {
    current_value = digit_sum(current_value);
    n ++;
  }

  printf("The additive root is the current value %d \n", current_value);
  printf("The additive persistence is %d\n", n);

  int product_value = i;
  int n2 = 0;
  while(product_value >=10)
  {
    product_value = digit_product(product_value);
    n2++;
  }

  printf("The multiplicative root is the current value %d \n", product_value);
  printf("The multiplicative persistence is %d \n", n2);

  }
