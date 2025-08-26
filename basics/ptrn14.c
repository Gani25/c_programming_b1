#include <stdio.h>
int main()
{
    int n, i, j, sp;
    printf("ENter a number: ");
    scanf("%d", &n);

    // ROW
    for (i = 1; i <= n; i++)
    {
        // SPACE
        for (sp = 1; sp <= n - i; sp++)
        {
            printf("  ");
        }
        // STAR
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {

                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}