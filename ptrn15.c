// BUTTERFLY
#include <stdio.h>
int main()
{
    int i, j, sp, n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        // STAR START
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        // SPACE
        for (sp = 1; sp <= (n - i) * 2 - 1; sp++)
        {
            printf("  ");
        }
        // STAR END
        for (j = 1; j <= i; j++)
        {
            if (j < n)
            {

                printf("* ");
            }
        }

        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        // STAR START
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        // SPACE
        for (sp = 1; sp <= (n - i) * 2 - 1; sp++)
        {
            printf("  ");
        }
        // STAR END
        for (j = 1; j <= i; j++)
        {
            if (j < n)
            {

                printf("* ");
            }
        }

        printf("\n");
    }
}