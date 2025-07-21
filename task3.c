#include <stdio.h>
/*
Prime Number divisible by 1 and by itself
*/
int main()
{
    int num, i;
    int flag = 0; // Asuume any value of n is a prime number
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("Number is a prime number\n");
    }
    else
    {
        printf("Number is not a prime number\n");
    }
}