// WAP to check whether the year is a leap year or not
// input = 1
/*
Leap Year:
1. It repeats after ever 4 years -> divisible by 4 (year % 4 == 0)
                &&
2. Century Year:
    a. Not all century years are leap year (year % 100 != 0)
                ||
    b. century year which repeats after every 400 years are leap year (year % 400 == 0)
*/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        printf("Year = %d is a leap year", year);
    }
    else
    {
        printf("Year = %d is not a leap year", year);
    }
}