// Homework 2
// Problem 4
// Calculate f(x,y)

#include<stdio.h>

int main()
{
    double x;
    double y;
    int n;
    printf("Enter the value of x:  ");
    scanf("%lf", &x);
    printf("Enter the value of y:  ");
    scanf("%lf", &y);
    printf("Enter the value of n:  ");
    scanf("%i", &n);
    double f;
    switch (n)
    {
    case 1:
        f = x + y;
        printf("f(x,y) = %.2lf", f);
        break;
    case 2:
        f = 2*x*y;
        printf("f(x,y) = %.2lf", f);
        break;
    case 3:
        f = x - 3*y + 1;
        printf("f(x,y) = %.2lf", f);
        break;
    case 4:
        f = y;
        printf("f(x,y) = %.2lf", f);
        break;
    default:
        printf("Invalid input for n\n");
        break;
    }
    return 0;
}
