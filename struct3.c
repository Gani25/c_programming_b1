#include <stdio.h>
#include <stdlib.h> // Bcoz load struct in heap
#include <string.h>
// User Defined Data Type -> We can name also
typedef struct student_structure
{
    // Collection of Fields
    // structure have combinations of variable declarations
    int rollNo;      // 4byte
    char name[50];   // 50 byte
    int age;         // 4 byte
    char gender[10]; // 10 byte
} student;

int main()
{
    student *studentPtr = (student *)malloc(sizeof(student));
    studentPtr->rollNo = 50;
    // studentPtr->name = "SPRK TECH";
    strcpy(studentPtr->name, "SPRK TECH");
    strcpy(studentPtr->gender, "Female");
    studentPtr->age = 35;

    // Create another structure with malloc and take input from user and display
    student *studentPtr2 = (student *)malloc(sizeof(student));
    // Take input

    printf("---------------------------------------------\n");
    printf("Student Information\n");
    printf("Roll No = %d\n", studentPtr->rollNo);
    printf("Name = %s\n", studentPtr->name);
    printf("Gender = %s\n", studentPtr->gender);
    printf("Age = %d\n", studentPtr->age);
}