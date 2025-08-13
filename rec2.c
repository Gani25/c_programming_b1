// 1. WAP to print sum of 1 to n using recursion
#include <stdio.h>
int sum(int num)
{
    if (num == 1)
    {
        return 1;
    }
    if (num == 0)
    {
        return 0;
    }
    return num + sum(num - 1);
}
int main()
{
    int n;
    printf("ENter a number: ");
    scanf("%d", &n);
    int result = sum(n);
    printf("The sum of 1 to %d is %d\n", n, result);
}