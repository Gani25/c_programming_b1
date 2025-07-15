// WAP to check whether the number is positive or negative or zero
// input = 1
// conditions = 3

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Number = %d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("Number = %d is negative\n", n);
    }
    else
    {
        printf("Number = %d is zero\n", n);
    }
}

/*
1. WAP to check whether the greatest of 2 numbers or both are equal
2. WAP to check whether the character is vowel or consonant
3. WAP to accept day-number and display day-name of week
4. WAP to accept marks of 5 subject print sum and average
    based on average display grade
    average is above or equal to 90 -> A
    average is between 60 to 89 -> B
    average is between 45 to 59 -> C
    average is between 35 to 44 -> D
    average is below 35 -> FAIL
*/