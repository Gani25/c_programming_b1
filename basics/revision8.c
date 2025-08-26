// WAP to print first n natural numbers in reverse order
// Input = 15
// start = n, stop = 1, gap = -1
// 15 14 13 12 11 10 ..... 1

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // initialization
    int i = n;
    while (i >= 1)
    {
        printf("%d\n", i);

        i--; // i = i - 1 Decrement by 1
    }
}