// 2. WAP to display even and odd elements sum of a given array
// {5, 9, 6, 4, 2, 1, 3, 7, 8, 10}
// i= 0; i<len; i++
// check if arr[i] is even -> add to evenSum
// check if arr[i] is odd -> add to oddSum
#include <stdio.h>
int main()
{
    int arr[] = {5, 9, 6, 4, 2, 1, 3, 7, 8, 10};
    int length = sizeof(arr) / sizeof(int);

    int evenSum = 0, oddSum = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenSum = evenSum + arr[i];
        }
        else
        {
            oddSum = oddSum + arr[i];
        }
    }
    printf("Sum of odd element present in array is %d\n", oddSum);
    printf("Sum of even element present in array is %d\n", evenSum);
}