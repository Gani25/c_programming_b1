// WAP to print factorial of 5
// 5 * 4 * 3 * 2 * 1 = 120
// start = 5, stop = 1, gap = -1
#include <stdio.h>
int main()
{
    int i, fact = 1;
    for (i = 5; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("The factorial of 5 is %d\n", fact);
}