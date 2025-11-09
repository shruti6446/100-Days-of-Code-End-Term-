//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "r");  // Open file for reading
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read all integers and compute sum and count
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("File is empty or contains no integers.\n");
    } else {
        avg = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
    }

    return 0;
}
