#include <stdio.h>

int main()
{
    int n, i, j, sp;
    printf("Enter a number: ");
    scanf("%d", &n);

    // ROWS
    for (i = 1; i <= n; i++)
    {
        // SPACE
        for (sp = 1; sp <= n - i; sp++)
        {
            printf("  ");
        }
        // STAR
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}