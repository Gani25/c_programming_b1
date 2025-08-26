/*
1. WAP to create 2 seperate array (odd element, even element) from a given array
{5,9,8,2,6,1,3}

-- Output
// oddArr = {5,9,1,3}
// evenArr = {8,2,6}
*/
#include <stdio.h>
int main()
{
    int arr[] = {5, 9, 8, 2, 6, 1, 3};
    int len = sizeof(arr) / sizeof(int);
    int i;

    int evenCount = 0, oddCount = 0;

    for (i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    int evenArr[evenCount], oddArr[oddCount];
    int oddIndex = 0, evenIndex = 0;
    // Loop over array
    for (i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArr[evenIndex] = arr[i];
            evenIndex++;
        }
        else
        {
            oddArr[oddIndex] = arr[i];
            oddIndex++;
        }
    }
    // Print odd Element array
    printf("Odd array is:\n");
    for (i = 0; i < oddCount; i++)
    {
        printf("%d\t", oddArr[i]);
    }
    // Print even Element array
    printf("\nEven array is:\n");
    for (i = 0; i < evenCount; i++)
    {
        printf("%d\t", evenArr[i]);
    }
}