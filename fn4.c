// with return type
// with paramaters
#include <stdio.h>

// Fn definition
int sum(int a, int b)
{
    int result = a + b;

    return result;
}
int main()
{
    int ans = sum(6, 10);
    printf("Answer = %d\n", ans);
    printf("Answer = %d\n", sum(90, 8));
}