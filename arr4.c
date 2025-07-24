// WAP to print sum of all elements present in array
// {5,2,3,10,15}
// sum = 5 + 2 + 3 + 10 + 15

#include <stdio.h>
int main()
{
    int arr[] = {5, 2, 3, 10, 15, 5, 2, 3, 3};
    // Calculate length of array
    int totalSize = sizeof(arr);
    printf("Size of array is %d byte\n", totalSize);
    int length = totalSize / sizeof(int);
    printf("length of array is %d\n", length);

    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + arr[i];
    }
    printf("Addition of elements present in array is: %d\n", sum);
}

/*
1. WAP to accept element in array of size 5 and print that array

2. WAP to display even and odd elements sum of a given array
{5,9,6,4,2,1,3,7,8,10}
*/