// 2. WAP to print sum of digit of n using recursion
// 125 -> 5 + 2 + 1
// remainder = 125 % 10 - 5
// num / 10 -> 12
#include <stdio.h>

int sumOFDigit(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 10) + sumOFDigit(num / 10);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digit of %d is %d\n", n, sumOFDigit(n));
}