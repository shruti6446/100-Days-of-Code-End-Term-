//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Test { X, Y, Z };

int main() {
    printf("X = %d\n", X);
    printf("Y = %d\n", Y);
    printf("Z = %d\n", Z);
    return 0;
}
