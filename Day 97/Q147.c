//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp, emp_read;
    FILE *fp;

    // --- Writing to file ---
    fp = fopen("employee.dat", "wb");   // open file in binary write mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Write structure to binary file
    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    printf("\nData written to file successfully!\n\n");

    // --- Reading from file ---
    fp = fopen("employee.dat", "rb");   // open file in binary read mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read structure from file
    fread(&emp_read, sizeof(emp_read), 1, fp);
    fclose(fp);

    // Display the read data
    printf("---- Employee Data Read From File ----\n");
    printf("ID      : %d\n", emp_read.id);
    printf("Name    : %s\n", emp_read.name);
    printf("Salary  : %.2f\n", emp_read.salary);

    return 0;
}
