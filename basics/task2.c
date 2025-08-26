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
        printf("A Grade\n");
    }
    else if (percentage >= 65)
    {
        printf("B Grade\n");
    }
    else if (percentage >= 55)
    {
        printf("C Grade\n");
    }
    else if (percentage >= 35)
    {
        printf("D Grade\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}