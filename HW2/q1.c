// Homework 2
// Problem 1
// Number guessing game

#include<stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter the limits of the range:  ");
    scanf("%i", &a);
    scanf("%i", &b);

    srand(time(NULL));
    int number;
    number = rand()% (b+1-a) + a;
    int guess;

    do
    {
        printf("Guess the number:  ");
        scanf("%i", &guess);
        if (guess > number)
        {
            printf("Your guess is too large!\n\n");
            b = guess;
            printf("The new range is %i - %i\n", a, b);
        }
        else if (guess < number)
        {
            printf("Your guess is too small!\n\n");
            a = guess;
            printf("The new range is %i - %i\n", a, b);
        }
    }
    while (guess != number);

    printf("You did it! The number was %i\n", number);
    return 0;
}
