#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);

    // ROW
    for (i = 1; i <= n; i++)
    {
        char alp = 'A'; // 65
        // COLUMN
        for (j = 1; j <= n; j++)
        {
            printf("%c ", alp);
            alp++; // 66(B) 67(C)
        }
        // NEXT LINE
        printf("\n");
    }
}