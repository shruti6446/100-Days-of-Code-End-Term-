//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;

    fp = fopen("students.txt", "w");  // Open file for writing
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Roll number: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    // Now read the data from file
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) != EOF) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}
