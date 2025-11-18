//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

enum Result { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Result res = TIMEOUT;

    switch (res) {
        case SUCCESS: printf("Operation successful!\n"); break;
        case FAILURE: printf("Operation failed!\n"); break;
        case TIMEOUT: printf("Operation timed out!\n"); break;
    }
    return 0;
}
