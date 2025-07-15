// 1. WAP to check whether the number have 3 digits or not?
// input = 18 -> Doenot contain 3 digit
// input = -155 -> Contains 3 digit

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num >= 100 && num <= 999) || (num >= -999 && num <= -100))
    {
        printf("Number = %d contains 3 digits\n", num);
    }
    else
    {
        printf("Number = %d doesnot contains 3 digits\n", num);
    }
}