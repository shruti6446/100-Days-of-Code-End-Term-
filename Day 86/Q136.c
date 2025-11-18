//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch. 🧱
#include <stdio.h>

enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    enum Menu choice = MULTIPLY;
    int a = 5, b = 3;

    switch (choice) {
        case ADD: printf("Sum = %d\n", a + b); break;
        case SUBTRACT: printf("Difference = %d\n", a - b); break;
        case MULTIPLY: printf("Product = %d\n", a * b); break;
    }
    return 0;
}
