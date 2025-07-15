// WAP to print factorial of 5
// 5 * 4 * 3 * 2 * 1
// start = 5, stop = 1, gap = -1

#include <stdio.h>

int main()
{
    int i = 5;
    int fact = 1;
    while (i >= 1)
    {
        fact = fact * i;
        i--;
    }
    printf("The factorial of 5 is %d\n", fact);
}