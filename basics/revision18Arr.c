// Take input in arrays of size 5:
// display in normal order as well as in reverse order
#include <stdio.h>
int main()
{
    int arr[5];
    int i;

    // Input
    for (i = 0; i < 5; i++)
    {
        printf("Enter element at position %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Display all the elements
    printf("Elements are: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }

    // Reverse order
    printf("\nElements in reverse order: \n");
    for (i = 5 - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}
