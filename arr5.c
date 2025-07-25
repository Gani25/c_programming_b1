// 1. WAP to accept (input[scanf]) element in array of size 5 and print that array

#include <stdio.h>
int main()
{
    int arr[5];

    int i;

    // INPUT
    for (i = 0; i < 5; i++)
    {
        printf("Enter element at position %d: ", i);
        scanf("%d", &arr[i]);
    }

    // DISPLAY
    printf("Elements are: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
}

// {2,5,10,-5,6} -> reverse output
// {6,-5,10,5,2}
// print