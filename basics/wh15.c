// WAP to check whether the number is palindrome or not
// EX: n = 183 -> Reverse = 381 -> Not a Palindrome
// n = 1551 -> Reverse = 1551 -> Palindrome Number

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int reverse = 0;
    int last_digit;

    // start
    // storing value of n in i for future processes
    int i = n;
    while (i != 0)
    {
        last_digit = i % 10;
        reverse = reverse * 10 + last_digit;
        i = i / 10;
    }
    if (n == reverse)
    {
        printf("Number = %d is a palindrome number\n", n);
    }
    else
    {

        printf("Number = %d is not a palindrome number, Reverse number = %d\n", n, reverse);
    }
}
