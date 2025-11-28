// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

// Enum for user roles
enum Role {
    ADMIN = 1,
    USER = 2,
    GUEST =3,
};

int main() {
    int choice;
    enum Role r;

    printf("Select Role:\n");
    printf("1 = ADMIN\n");
    printf("2 = USER\n");
    printf("3 = GUEST\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    r = choice;

    if (r == ADMIN) {
        printf("Welcome SATYANSH! You have full access.\n");
    }
    else if (r == USER) {
        printf("Hello FRIEND! You have limited access.\n");
    }
    else if (r == GUEST) {
        printf("Hi! You can only view content.\n");
    }

    return 0;
}