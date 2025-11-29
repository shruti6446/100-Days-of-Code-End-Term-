//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

// Define structure
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;          // structure variable
    struct Student *ptr = &s;  // pointer to structure

    // Modify data using pointer with -> operator
    ptr->roll = 101;
    strcpy(ptr->name, "Rahul");
    ptr->marks = 92.5;

    // Display data using pointer
    printf("Student Details:\n");
    printf("Roll Number : %d\n", ptr->roll);
    printf("Name        : %s\n", ptr->name);
    printf("Marks       : %.2f\n", ptr->marks);

    return 0;
}
