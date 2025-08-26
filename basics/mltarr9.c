// Addition of 2 matrices
#include <stdio.h>
int main()
{
    int arr1[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int arr2[][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {8, 7, 10}};
    // How to calculate size
    int rowSize = sizeof(arr1) / sizeof(arr1[0]);

    printf("size of array = %d bytes\n", sizeof(arr1));
    printf("size of element in array = %d bytes\n", sizeof(arr1[0]));
    printf("Row size = %d\n", rowSize);
    int colSize = sizeof(arr1[0]) / sizeof(int);
    printf("Col size = %d\n", colSize);

    // create empty array of row and col size
    int sum[rowSize][colSize];
    printf("Sum of matrices is\n");
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}