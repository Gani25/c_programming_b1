// WAP to print cube of 1 to 10
// cube of 1 is 1
// cube of 2 is 8
// cube of 3 is 27
#include <stdio.h>
int main()
{
    int i, cube;
    for (i = 1; i <= 10; i++)
    {
        cube = i * i * i;
        printf("The cube of %d is %d\n", i, cube);
    }
}
/*
1. WAP to print factorial of n
// n = 4
The factorial of 4 is 24
2. WAP to print table of n till x iteration
n = 2, x = 3
2 X 1 = 2
2 X 2 = 4
2 X 3 = 6

3. WAP to print odd and even value sum from 1 to 10 using only one loop
1 2 3 4 5 6 7 8 9 10
odd = 1 + 3 + 5 + 7 + 9 =25
even = 2 + 4 + 6 + 8 + 10 = 30
// Even sum from 1 to 10 is 30
// Odd sum from 1 to 10 is 25
*/