#include <stdio.h>
int main()
{
    int n, i, j, sp;

    printf("Enter a number: ");
    scanf("%d", &n);

    // ROW
    for (i = n; i >= 1; i--)
    {
        // SPACE
        for (sp = 1; sp <= n - i; sp++)
        {
            printf("  ");
        }

        // STAR (j)
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        // NEXT LINE
        printf("\n");
    }
}