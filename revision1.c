// WAP to check whether the number is divisible by 3 or not
// Input = 1, conditions = 2 (if else)
// divisible by 3-> divide number by 3 and if remainder (%) is 0
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 3 == 0)
    {
        printf("Number = %d is divisible by 3", number);
    }
    else
    {
        printf("Number = %d is not divisible by 3", number);
    }
}