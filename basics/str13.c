// find length of string without strlen()
#include <stdio.h>
int main()
{
    char str[] = "SPRK";
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    printf("Length of %s = %d\n", str, i);
}