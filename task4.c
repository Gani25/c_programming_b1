// K pattern
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);

    // UPPER HALF
    // ROW
    for (i = n; i >= 1; i--)
    {
        // COLUMN
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // LOWER HALF
    // ROW
    for (i = 2; i <= n; i++)
    {
        // COLUMN
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}