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
    int i, j;
    // ROW
    for (i = 1; i <= 5; i++)
    {
        // COLUMN
        for (j = 1; j <= 5; j++)
        {
            printf("%d\t", j);
        }
        // Move cursor to next line (next row)
        printf("\n");
    }
}