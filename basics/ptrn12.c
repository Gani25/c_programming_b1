#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);

    // ROW
    for (i = 1; i <= n; i++)
    {
        // COLUMN
        for (j = 1; j <= n; j++)
        {
            if (i == j || j == n - i + 1)
            {
                printf("* ");
            }
            else
            {

                printf("  ");
            }
        }
        // NEXT LINE
        printf("\n");
    }
}