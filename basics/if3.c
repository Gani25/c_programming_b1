// WAP to check whether the number is even or odd

// input = 1
// condition = 2

// even -> divisible by 2 -> Divide number by 2 and remainder is 0

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Number = %d is even\n", n);
    }
    else
    {
        printf("Number = %d is odd\n", n);
    }
}