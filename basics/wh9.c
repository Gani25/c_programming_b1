// WAP to print sum of 1 to 10
// 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
#include <stdio.h>
int main()
{
    int i = 1;
    int sum = 0;

    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum of 1 to 10 is %d\n", sum);
}