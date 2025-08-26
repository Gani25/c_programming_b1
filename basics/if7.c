/*4. WAP to accept marks of 5 subject print sum and average
    based on average display grade
    average is above or equal to 90 -> A
    average is between 60 to 89 -> B
    average is between 45 to 59 -> C
    average is between 35 to 44 -> D
    average is below 35 -> FAIL*/
#include <stdio.h>

int main()
{
    int subj1, subj2, subj3, subj4, subj5;
    int total, percentage;
    printf("Enter marks for Subj1:- ");
    scanf("%d", &subj1);
    printf("Enter marks for Subj2:- ");
    scanf("%d", &subj2);
    printf("Enter marks for Subj3:- ");
    scanf("%d", &subj3);
    printf("Enter marks for Subj4:- ");
    scanf("%d", &subj4);
    printf("Enter marks for Subj5:- ");
    scanf("%d", &subj5);

    total = subj1 + subj2 + subj3 + subj4 + subj5;
    percentage = total / 5;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %d\n", percentage);

    if (percentage >= 90)
    {
        printf("A\n");
    }
    else if (percentage >= 60)
    {
        printf("B\n");
    }
    else if (percentage >= 45)
    {
        printf("C\n");
    }
    else if (percentage >= 35)
    {
        printf("D\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}