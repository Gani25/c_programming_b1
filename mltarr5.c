// WAP to print diagonal of a given matrix (square matrix)
#include <stdio.h>
int main()
{
    int arr[][3] = {
        {10, 2, -9},
        {6, 5, 8},
        {-2, 0, 45}};
    int i, j;
    int size = 3;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("Primary Diagonal of matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%d\t", arr[i][j]);
            }
        }
    }
    printf("\nSecondary Diagonal of matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i + j == size - 1)
            {
                printf("%d\t", arr[i][j]);
            }
        }
    }
}