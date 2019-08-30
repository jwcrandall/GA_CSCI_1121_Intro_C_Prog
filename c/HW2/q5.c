// Homework 2
// Problem 5
// Nim game

#include<stdio.h>

int main()
{
    int start1;
    int start2;
    int start3;
    printf("How many coins in pile 1?  ");
    scanf("%i", &start1);
    printf("How many coins in pile 2?  ");
    scanf("%i", &start2);
    printf("How many coins in pile 3?  ");
    scanf("%i", &start3);
    int n;
    n = 1;
    int player;
    while (start1 > 0 || start2 > 0 || start3 > 0)
    {
        int pile;
        player = (n-1)%2 + 1;
        printf("Player %i: which pile do you want to remove from?  ", player);
        scanf("%i", &pile);
        int remove;
        printf("How many coins do you want to remove?  ");
        scanf("%i", &remove);
        if (remove <= 0)
        {
            printf("No cheating! Please try again.");
        }
        else if (pile == 1)
        {
            start1 = start1 - remove;
        }
        else if (pile == 2)
        {
            start2 = start2 - remove;
        }
        else if (pile == 3)
        {
            start3 = start3 - remove;
        }
        else
        {
            printf("Invalid pile chosen. Please try again.");
        }
        printf("Current pile sizes:\nPile1:%i\nPile2:%i\nPile3:%i\n", start1, start2, start3);
        n ++;
    }
    printf("Player %i is the loser\n", player);
    printf("Player %i is the winner\n", player%2 + 1);
}
