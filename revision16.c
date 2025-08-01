// WAP to check whether the number is prime or not
// start = 2, stop = n - 1, gap = 1

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // Assume n is a prime number
    // 0 means number is a prime number
    int isPrime = 0;
    if (n <= 1)
    {
        isPrime = 1; // Changing ussumption to false if it less than or equal to 0
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // Not a prime number
            isPrime = 1;
            break;
        }
    }
    if (isPrime == 0)
    {
        printf("Number %d is a prime number\n", n);
    }
    else
    {
        printf("Number %d is not a prime number\n", n);
    }
}