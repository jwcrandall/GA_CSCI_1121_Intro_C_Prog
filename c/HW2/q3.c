// Homework 2
// Problem 3
// Print a diamond pattern

#include<stdio.h>

int main()
{
    int x;
    int n;
    int m;
    int a;
    printf("Enter the number of rows:  ");
    scanf("%i", &x);
    for (n = 1; n <= x; n++)
    {
        a = 1;
        m = x - n;
        while (m >= 1)
        {
            printf(" ");
            m--;
        }
        while (a <= 2*n - 1)
        {
            printf("*");
            a ++;
        }
        printf("\n");
    }
    for (n = x - 1; n >= 1; n--)
    {
        a = 1;
        m = x - n;
        while (m >= 1)
        {
            printf(" ");
            m--;
        }
        while (a <= 2*n - 1)
        {
            printf("*");
            a ++;
        }
        printf("\n");
    }
    return 0;
}
