/*2. WAP to reverse a given array inplace
{2, 5, 10, -5, 6}
Output-> {6, -5, 10, 5, 2}*/

#include <stdio.h>
int main()
{
    int arr[] = {2, 5, 10, -5, 6, 25};

    int len = sizeof(arr) / sizeof(int);
    int i;
    printf("Array in normal order is: \n");
    for (i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
    }
    // Reverse logic
    i = 0;
    int j = len - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    // Display Array in reverse order
    printf("\nArray in reverse order is: \n");
    for (i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
    }
}