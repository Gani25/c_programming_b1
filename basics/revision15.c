// WAP to print table of n till x iterations
// n = 10, x = 5
/*
10 * 1 = 10
10 * 2 = 20
10 * 3 = 30
10 * 4 = 30
10 * 5 = 50
*/

#include <stdio.h>
int main()
{
    int n, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter nummber of iterations: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        int table = n * i;
        printf("%d * %d = %d\n", n, i, table);
    }
}
