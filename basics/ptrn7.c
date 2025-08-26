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
            // (i+j) EVEN -> 1
            //(i+j) ODD -> 0
            if ((i + j) % 2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}