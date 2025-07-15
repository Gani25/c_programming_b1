// 3. WAP to accept day - number and display day - name of week

// input = 1
// condition = 7

#include <stdio.h>
int main()
{
    int dayNumber;

    printf("Enter day number: ");
    scanf("%d", &dayNumber);

    if (dayNumber == 1)
    {
        printf("Monday\n");
    }
    else if (dayNumber == 2)
    {
        printf("Tuesday\n");
    }
    else if (dayNumber == 3)
    {
        printf("Wednesday\n");
    }
    else if (dayNumber == 4)
    {
        printf("Thursday\n");
    }
    else if (dayNumber == 5)
    {
        printf("Friday\n");
    }
    else if (dayNumber == 6)
    {
        printf("Saturday\n");
    }
    else if (dayNumber == 7)
    {
        printf("Sunday\n");
    }
    else
    {
        printf("Invalid day number\n");
    }
}