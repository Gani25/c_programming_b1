// WAP to sort given array
// Bubble sort

#include <stdio.h>
int main()
{
    int arr[] = {30, 25, 10, 8, -9, -35, -60};

    int i, j;
    int size = sizeof(arr) / sizeof(int);
    int numOfPasses = size - 1;

    printf("Array before sorting:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    // Sorting Using Bubble Sort
    // NUMBER OF PASSES
    for (i = 0; i < size; i++)
    {
        // In each pass we have to compare current element from next element
        // i = 0, 7 - 0 - 1 = 6 ->j = 0 1 2 3 4 5
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // SWAP
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print array after sorting
    printf("Array after sorting:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}

// SORT