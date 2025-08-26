// SORT given array in descending order
// {8,50,6,-9,25}
// WAP to sort given array
// Bubble sort

#include <stdio.h>
int main()
{
    int arr[] = {8, 50, 6, -9, 25};

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

        for (j = 0; j < size - i - 1; j++)
        {
            // DESC first element should be less than second element
            if (arr[j] < arr[j + 1])
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
