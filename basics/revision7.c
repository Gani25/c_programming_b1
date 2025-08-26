// Print even number from 1 to n
// start = 2, stop = n, gap = 2

#include <stdio.h>
int main()
{
    int i = 2;
    int n; // input
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {

        printf("%d\n", i);
        i = i + 2;
    }
}