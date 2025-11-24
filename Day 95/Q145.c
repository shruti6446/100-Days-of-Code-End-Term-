//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to return top student's details
struct Student findTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];   // return structure
}

int main() {
    struct Student st[5];
    int i;

    // Taking input for 5 students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", st[i].name);

        printf("Roll: ");
        scanf("%d", &st[i].roll);

        printf("Marks: ");
        scanf("%f", &st[i].marks);
    }

    // Get top student structure
    struct Student top = findTopStudent(st, 5);

    // Print top student details
    printf("\n\n--- Top Student ---\n");
    printf("Name  : %s\n", top.name);
    printf("Roll  : %d\n", top.roll);
    printf("Marks : %.2f\n", top.marks);

    return 0;
}
