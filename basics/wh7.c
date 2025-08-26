
// 7. WAP to print square of first n natural number
// Ex => n = 5
/*
The square of 1 is 1
The square of 2 is 4
The square of 3 is 9
The square of 4 is 16
The square of 5 is 25
*/

#include <stdio.h>
int main()
{
    int i = 1;
    int square, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        square = i * i;
        printf("The square of %d is %d\n", i, square);
        i++;
    }
}