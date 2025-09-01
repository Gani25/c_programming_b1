#include <stdio.h>
#include "my_header.h"
// Save 1 employee in file
int main()
{
    FILE *fptr = fopen("employee-info.txt", "ab+");
    employee e1;

    printf("Enter employee id: ");
    scanf("%d", &e1.empId);
    fflush(stdin);
    printf("Enter name: ");
    fgets(e1.name, 100, stdin);
    printf("Enter department: ");
    fgets(e1.department, 100, stdin);
    printf("Enter salary: ");
    scanf("%d", &e1.salary);

    fwrite(&e1, sizeof(employee), 1, fptr);

    printf("File saved successfully\n");
    rewind(fptr);
    // READ USING LOOP
    while (fread(&e1, sizeof(employee), 1, fptr) > 0)
    {
        printf("------------------------------------------------------\n");
        printf("Employee Info\n");
        printf("Id = %d\n", e1.empId);
        printf("Name = %s", e1.name);
        printf("Department = %s", e1.department);
        printf("Salary = %d\n", e1.salary);
    }
}