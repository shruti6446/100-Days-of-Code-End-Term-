//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>  // For isalpha(), tolower()

int main() {
    FILE *fptr;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    // Ask user for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fptr = fopen(filename, "r");

    // Check if file exists
    if (fptr == NULL) {
        printf("Error: File '%s' not found.\n", filename);
        return 1;
    }

    // Read each character from the file
    while ((ch = fgetc(fptr)) != EOF) {
        ch = tolower(ch);  // Convert to lowercase for easy comparison
        if (isalpha(ch)) { // Check if character is a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fptr);

    // Display results
    printf("\nNumber of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
