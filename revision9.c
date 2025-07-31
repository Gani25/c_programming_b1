// WAP to print table of n
// Example n = 3
// 3 * 1 = 3
// 3 * 2 = 6
//     .
//     .
//     .
// 3 * 10 = 30

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number to display table: ");
    scanf("%d", &n);
    int i = 1, table;

    while (i <= 10)
    {
        table = n * i;
        printf("%d * %d = %d\n", n, i, table);
        i++;
    }
}

// 10. WAP to print square of first n natural number
// Example: n = 6
// start = 1, stop = n, gap = 1
// square = i * i
// 1.... n
/*
The square of 1 is 1
The square of 2 is 4
The square of 3 is 9
The square of 4 is 16
The square of 5 is 25
The square of 6 is 36
*/

/*
11. WAP to print table of n till x iteration
Example n = 6, x = 5
6 * 1 = 6
6 * 2 = 12
6 * 3 = 18
6 * 4 = 24
6 * 5 = 30
*/