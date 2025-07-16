
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
            printf("%d\t", i);
        }
        // Move cursor to next line (next row)
        printf("\n");
    }
}