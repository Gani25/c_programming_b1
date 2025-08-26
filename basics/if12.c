// 4. WAP to accept input of a number and display msg based on below criteria
// num is divisible by 3 display FIZZ
// num is divisible by 5 display BUZZ
// num is divisible by 3 as well as 5 display FIZZBUZZ
// num is not divisible display number

#include <stdio.h>
int main()
{
    int n;
    printf("ENter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 3 == 0)
    {
        printf("FIZZBUZZ");
    }
    else if (n % 5 == 0)
    {
        printf("BUZZ");
    }
    else if (n % 3 == 0)
    {
        printf("FIZZ");
    }
    else
    {
        printf("%d", n);
    }

    return 0;
}