// WAP to print sum of 1 to 10
// 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("The sum of 1 to 10 is %d\n", sum);
}