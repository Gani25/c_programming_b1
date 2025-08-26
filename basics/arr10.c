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

// Check whether the given array is sorted or not take input in array from user
// size of array is fixed i.e 5

// input 1: 1,3,9,12,20
// ouput - Given array 1 3 9 12 20 is sorted array

// input 2: 2,20,6,8,-5
// ouput - Given array 2,20,6,8,-5 is not sorted array

// Dipchi, Ayush
