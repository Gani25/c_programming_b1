// WAP to print table of n
// n = 6

#include <stdio.h>
int main()
{
    int i = 1;
    int n, table;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= 10)
    {
        table = n * i;
        printf("%d * %d = %d\n", n, i, table);
        i++;
    }
}
/*
13. WAP to print table of n till x iteration.
14. WAP to print factorial of n
15. WAP to print sum of 1 to n
16. WAP to print cube of 1 to n
*/