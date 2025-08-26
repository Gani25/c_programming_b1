// 6. WAP to print first n natural number in reverse order
// Ex => n = 20
// Start = n, stop = 1, gap = -1

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n); // start

    while (n >= 1)
    {
        printf("%d\n", n);
        n--;
    }
}