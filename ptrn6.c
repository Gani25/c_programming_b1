#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);

    // ROW
    for (i = 1; i <= n; i++)
    {
        // COLUMN (REVERSE)
        for (j = n; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}