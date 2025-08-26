// Check whether the given array is sorted or not take input in array from user
// size of array is fixed i.e 5

// input 1: 1,3,9,12,20
// ouput - Given array 1 3 9 12 20 is sorted array

// input 2: 2,20,6,8,-5
// ouput - Given array 2,20,6,8,-5 is not sorted array

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

    // Print Array
    printf("Array is:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    // Logic for checking if its sorted or not
    int sorted = 0; // Assume input array is sorted

    for (i = 0; i < 4; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            // Not sorted
            sorted = 1;
            break;
        }
    }
    if (sorted == 0)
    {
        printf("\nArray is sorted\n");
    }
    else
    {
        printf("\nArray is not sorted\n");
    }
}