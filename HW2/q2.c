// Homework 2
// Problem 2
// Determine weekday of a given date

#include<stdio.h>

int main()
{
    int year;
    int month;
    int day;
    printf("Enter the year:  ");
    scanf("%i", &year);
    printf("Enter the month:  ");
    scanf("%i", &month);
    printf("Enter the day:  ");
    scanf("%i", &day);

    if (month == 1 || month == 2)
    {
        month = month + 12;
        year = year - 1;
    }

    int h1;
    h1 = day + ((13*(month+1))/5) + year + (year/4) - (year/100) + (year/400);
    int h2;
    h2 = h1%7;

    switch (h2)
    {
    case 0:
        printf("Saturday");
        break;
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    }
    return 0;
}


