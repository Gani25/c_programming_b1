// WAP to check whether the triangle is equilateral or isoceles or scalene
// 3 sides
// Equilateral = All sides are equal
// Isoceles = Any 2 sides are equal
// Scalene = No Sides are equal

#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter side 1: ");
    scanf("%d", &s1);
    printf("Enter side 2: ");
    scanf("%d", &s2);
    printf("Enter side 3: ");
    scanf("%d", &s3);

    if (s1 > 0 && s2 > 0 && s3 > 0)
    {

        if (s1 == s2 && s2 == s3)
        {
            printf("Equialteral Triangle");
        }
        else if (s1 == s2 || s2 == s3 || s1 == s3)
        {
            printf("Isoceles Triangle");
        }
        else
        {
            printf("Scalene  Triangle");
        }
    }
    else
    {
        printf("Invalid  Triangle");
    }

    return 0;
}

/*
1. Accept marks of 5 subject
    check if student have passed in all subjects -> marks >=35
        if passed in all subjects then calculate sum and avg
            based on avg display grades
            based on average display grade
                average is above or equal to 90 -> A
                average is between 60 to 89 -> B
                average is between 45 to 59 -> C
                average is between 35 to 44 -> D


    if student fails in any of the subject display FAIL
*/