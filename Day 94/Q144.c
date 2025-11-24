//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function that accepts a structure and prints its members
void display(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", s.name);
    printf("Roll  : %d\n", s.roll);
    printf("Marks : %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    // Taking input
    printf("Enter name: ");
    gets(s1.name); // avoid in real programs; used here for simplicity

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Passing structure to function
    display(s1);

    return 0;
}
