//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    // Allocate memory for structure using malloc()
    struct Employee *emp = (struct Employee *)malloc(sizeof(struct Employee));

    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign values using -> operator
    emp->id = 101;
    strcpy(emp->name, "Akshat");
    emp->salary = 55000.75;

    // Display the values
    printf("Employee Details:\n");
    printf("ID      : %d\n", emp->id);
    printf("Name    : %s\n", emp->name);
    printf("Salary  : %.2f\n", emp->salary);

    // Free allocated memory
    free(emp);

    return 0;
}
