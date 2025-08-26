// WAP to print sum of 1 to n
// Example n = 5
// 1 + 2 + 3 + 4 + 5 = 15

// start = 1, stop = n, gap = 1
#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum of 1 to %d is %d\n", n, sum);
}