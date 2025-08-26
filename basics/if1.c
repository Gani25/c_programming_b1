// WAP to check whether the number is positive or negative
// input = 1
// conditions = 2

#include <stdio.h>
int main()
{
    int num1;
    printf("Enter a number: ");
    scanf("%d", &num1);

    if (num1 >= 0)
    {
        printf("Number = %d is positive", num1);
    }
    else
    {
        printf("Number = %d is negative", num1);
    }
}

// WAP to check whether the number is zero or non-zero