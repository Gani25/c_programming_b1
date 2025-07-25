// min max
/*
1. Find maximum and minimum element from given array
{20,80,-5,10,3,6,-25,100,-30}
*/

#include <stdio.h>
int main()
{
    int arr[] = {20, 80, -5, 10, 3, 6, -25, 100, -30};
    int len = sizeof(arr) / sizeof(int);

    // Assuming my first element is both min and max
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);
}
/*
1. WAP to create 2 seperate array (odd element, even element) from a given array
{5,9,8,2,6,1,3}

-- Output
// oddArr = {5,9,1,3}
// evenArr = {8,2,6}
*/