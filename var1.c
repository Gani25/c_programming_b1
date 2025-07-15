// WAP to print int variable value and address
#include <stdio.h>

int main()
{

    int userAge = 38;

    printf("The value of int is %d\n", userAge);
    printf("The address of int is %d\n", &userAge);

    // Print value and address of float variable -> pi = 3.14

    float pi = 3.14;
    printf("The value of float is %f\n", pi);
    printf("The address of float is %d\n", &pi);
}