// Fibo nacci series till n
#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, n3, i, n;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci series till %d iterations\n", n);
    printf("%d %d ", n1, n2);
    for (i = 3; i <= n; i++)
    {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }
}