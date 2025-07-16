/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // ROW
    for (i = 1; i <= n; i++)
    {
        // COLUMN
        for (j = 1; j <= n; j++)
        {
            printf("* ");
        }
        // Move cursor to next line (next row)
        printf("\n");
    }
}