//Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    for (int i = JAN; i <= DEC; i++) {
        printf("Month %d has %d days\n", i+1, days[i]);
    }
    return 0;
}
