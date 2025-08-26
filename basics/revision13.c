// WAP to print multiplication of digits of n
// Example 156 -> 6 * 5 * 1 = 30
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = n;
    int last_digit, product = 1;
    while (i != 0)
    {
        last_digit = i % 10;
        product = product * last_digit;
        i = i / 10;
    }
    printf("The product of digits of %d is %d\n", n, product);
}