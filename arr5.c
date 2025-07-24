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