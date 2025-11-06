//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>

int main() {
    char filename[100];
    FILE *fptr;
    char ch;

    // Ask user for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open file in read mode
    fptr = fopen(filename, "r");

    // Check if file exists
    if (fptr == NULL) {
        printf("Error: File '%s' does not exist.\n", filename);
    } else {
        printf("\n--- File Content ---\n");
        // Read and display file content
        while ((ch = fgetc(fptr)) != EOF) {
            putchar(ch);
        }
        fclose(fptr);
    }

    return 0;
}
