// WAP to print first 10 odd numbers
// 1 3 5 7 9 11 13 15 17 19
// start = 1, stop = 19, gap = 2
#include <stdio.h>
int main()
{
    int i = 1;

    while (i <= 19)
    {
        printf("%d\n", i);
        i += 2;
    }
}