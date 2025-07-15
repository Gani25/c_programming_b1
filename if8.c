/*
Write a program that calculates the electricity bill
based on the following conditions:

For first 100 units: ₹5/unit
For next 100 units (101-200): ₹6/unit
For units above 200: ₹7/unit
*/

#include <stdio.h>
int main()
{
    int units;
    printf("Enter unit consumed: ");
    scanf("%d", &units);
    int total;

    if (units <= 100)
    {
        total = units * 5;
    }
    else if (units <= 200)
    {
        total = 500 + (units - 100) * 6;
    }
    else
    {
        total = 500 + 600 + (units - 200) * 7;
    }
    printf("Unit consumed = %d\nTotal Amount = %d INR", units, total);
}

// 1. WAP to check whether the number have 3 digits or not?
// input = 18 -> Doenot contain 3 digit
// input = -155 -> Contains 3 digit

// 2. WAP to check whether the last digit of a number is divisible by 3 or not
// input = 159
// last_digit = 9 -> divisible by 3

// 3. WAP to check whether the given year is a leap year or not

// 4. WAP to accept input of a number and display msg based on below criteria
// num is divisible by 3 display FIZZ
// num is divisible by 5 display BUZZ
// num is divisible by 3 as well as 5 display FIZZBUZZ
// num is not divisible display number