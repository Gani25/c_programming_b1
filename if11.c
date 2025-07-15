// 3. WAP to check whether the given year is a leap year or not

/*
1. Leap year repeat after every 4 years -> year % 4 == 0
            and
2. Century Year (100, 200, 1800)
    a. Not all century year are leap year -> year % 100 != 0
                    or
    b. Century year which repeats after every 400 year is a leap year -> year % 400 == 0
*/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        printf("Year = %d is a leap year\n", year);
    }
    else
    {
        printf("Year = %d is not a leap year\n", year);
    }

    return 0;
}