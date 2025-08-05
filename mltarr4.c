// QS. WAP to accpt input in matrix of size 5 * 2 and display matrix and sum

#include <stdio.h>
int main()
{
    int arr[5][2]; // Declaration

    int i, j;
    int sum = 0;

    // INPUT
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter element at position %d, %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // OUTPUT
    printf("Matrix of size 5 * 2 is: \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("\n");
    }
    printf("The sum of element is: %d\n", sum);
}