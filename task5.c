// Palindrome
// 1441 -> 1441 same
// 189 -> 981 Not Palindrome
#include <stdio.h>
int main()
{
    int n, i, last_digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Initialization
    i = n;

    while (i != 0)
    {
        last_digit = i % 10;
        reverse = reverse * 10 + last_digit;
        i = i / 10;
    }
    if (n == reverse)
    {
        printf("Number = %d is a palindrome\n", n);
    }
    else
    {
        printf("Number = %d is not a palindrome, Reverse =  %d\n", n, reverse);
    }
}