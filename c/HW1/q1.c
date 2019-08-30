#include <stdio.h>
int main(){
    int i;
    printf("Enter a four-digit number: ");
    scanf("%i", &i);

    int thousands = i / 1000;
    int hundreds = (i % 1000) / 100;
    int tens = (i % 100) / 10;
    int units = (i % 10) / 1;

    printf("The reserved order is %i%i%i%i\n", units, tens, hundreds, thousands);
}
