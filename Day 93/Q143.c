//Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find highest marks
    int maxIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    // Print student with highest marks
    printf("\n----- Student with Highest Marks -----\n");
    printf("Name      : %s\n", s[maxIndex].name);
    printf("Roll No   : %d\n", s[maxIndex].roll_no);
    printf("Marks     : %.2f\n", s[maxIndex].marks);

    return 0;
}
