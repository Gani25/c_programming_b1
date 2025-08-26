
// 8. WAP to print only even number from 1 to n
// start = 2, stop = n, gap = 2

#include <stdio.h>
int main()
{
    int n;
    int i = 2; // start

    printf("Enter a number: ");
    scanf("%d", &n); // stop
    while (i <= n)
    {
        printf("%d\n", i);
        i += 2;
    }
}