// 2. WAP to check whether the last digit of a number is divisible by 3 or not
// input = 159
// last_digit = 9 -> divisible by 3

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int lastDigit = num % 10;

    if (lastDigit % 3 == 0)
    {
        printf("Number = %d have Last Digit = %d which is divisible by 3\n", num, lastDigit);
    }
    else
    {

        printf("Number = %d have Last Digit = %d which is not divisible by 3\n", num, lastDigit);
    }

    return 0;
}