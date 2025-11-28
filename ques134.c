#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    int choice;
    enum Status s;

    printf("Enter status:\n");
    printf("0 = SUCCESS\n");
    printf("1 = FAILURE\n");
    printf("2 = TIMEOUT\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    s = choice;

    if (s == SUCCESS) {
        printf("Successful yes you did it!\n");
    }
    else if (s == FAILURE) {
        printf("you Failed faileiur!\n");
    }
    else if (s == TIMEOUT) {
        printf("Timed Out dude!\n");
    }
    else {
        printf("Invalid choice! Enter 0, 1, or 2.\n");
    }

    return 0;
}