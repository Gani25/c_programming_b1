#include <stdio.h>
int main()
{
    int n1 = 10;
    int n2 = 53;

    printf("Value of n1 before swap is: %d\n", n1);
    printf("Value of n2 before swap is: %d\n", n2);
    int temp = n1;
    n1 = n2;
    n2 = temp;
    printf("Value of n1 after swap is: %d\n", n1);
    printf("Value of n2 after swap is: %d\n", n2);
}