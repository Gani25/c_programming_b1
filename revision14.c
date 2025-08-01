// FOR LOOP
// Print Bellow Series
// 100 90 80 70 60 50 40 30 20 10 0
// Start = 100, stop = 0, gap = 10

#include <stdio.h>
int main()
{
    // declaration
    int i;
    for (i = 100; i >= 0; i = i - 10)
    {
        printf("%d\t", i);
    }
}