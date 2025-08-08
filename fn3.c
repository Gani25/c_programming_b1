// WAP to add 2 numbers in function and then perform multiplication of same number using function
#include <stdio.h>

// Function definition
void multiplication(int a, int b)
{
    printf("I am Multiplication Function\n");
    int result = a * b;
    printf("Multiplication of %d, %d = %d\n", a, b, result);
}
// without return type - void, without parameters (empty)
// function definition {}
void addition()
{
    printf("I am addition Function\n");
    int n1, n2;
    int result;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &n1, &n2);

    result = n1 + n2;

    printf("Addition of %d, %d = %d\n", n1, n2, result);
    // fn call
    multiplication(n1, n2);
}

int main()
{
    // Fn call
    addition();
}

// CREATE 2 function
// In fn 1 take 2 number input and display subtraction of both numbers -> 5,3 = 2
// In fn 2 pass same 2 numbers and calculate power -> 5 power 3 -> 125

// in main call only first function