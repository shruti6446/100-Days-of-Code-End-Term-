//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r = USER;

    switch (r) {
        case ADMIN: printf("Welcome, Admin!\n"); break;
        case USER:  printf("Hello, User.\n"); break;
        case GUEST: printf("Guest access only.\n"); break;
    }
    return 0;
}
