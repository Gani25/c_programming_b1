// WAP to print first n natural number
// n = user input
// start = 1, stop = n, gap = 1

#include <stdio.h>
int main()
{
    int i = 1;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
}