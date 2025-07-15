// WAP to print table of 5

#include <stdio.h>

int main()
{
    int i;
    int table;
    for (i = 1; i <= 10; i++)
    {
        table = 5 * i;
        printf("5 X %d = %d\n", i, table);
    }
}