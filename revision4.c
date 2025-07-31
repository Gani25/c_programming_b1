/*
1. WAP to check whether the number is
    a. divisible by 3 and 5 both
    b. only divisible by 3
    c. only divisible by 5
    d. not divisible by any
    // Variable = 1, Conditions = 4
    // Ex1 input = 15 divisible by 3 and 5
    // Ex2 input = 12 divisble by 3
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("Number is divisible by 3 and 5");
    }
    else if (num % 3 == 0)
    {
        printf("Number is only divisible by 3");
    }
    else if (num % 5 == 0)
    {
        printf("Number is only divisible by 5");
    }
    else
    {
        printf("Number is not divisible by any");
    }
}
