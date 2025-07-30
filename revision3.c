// WAP to check whether the number is
// divisible by 3 and 5 both or not

// input = 1, condition = 2 (if else)
// Divisible by 3 and 5 (%3 == 0) && (%5 == 0)
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("Number is divisible by 3 and 5 both");
    }
    else
    {
        printf("Number is not divisible by 3 and 5 ");
    }
}
/*
1. WAP to check whether the number is
    a. divisible by 3 and 5 both
    b. only divisible by 3
    c. only divisible by 5
    d. not divisible by any

2. WAP to accept marks of 5 subject and calculate sum and percentage
    based on percentage  display grades
    percentage between 100 to 85 -> A Grade
    percentage between 84 to 70 -> B Grade
    percentage between 69 to 55 -> C Grade
    percentage between 54 to 35 -> D Grade
    below 35 -> Fail
*/