// Loops
// WAP to print only odd number from 1 to 20
// start = 1, stop = 20, gap = 2
// 1 3 5 7 9 11 13 15 17 19

#include <stdio.h>
int main()
{
    int i = 1; // start (initialization)

    while (i <= 20)
    {
        printf("%d\n", i);
        i = i + 2;
    }
}