// WAP to print square of given number
// unless user presses -1 to exit

#include <stdio.h>
int main()
{
    int num;
    do
    {
        printf("Enter a number or -1 to exit: ");
        scanf("%d", &num);
        if (num == -1)
        {
            printf("Thanks for using I am closing\n");
        }
        else
        {
            int square = num * num;
            printf("The square of %d is %d\n", num, square);
        }

    } while (num != -1);
}