#include <stdio.h>

enum Traffic {
    RED,
    YELLOW,
    GREEN
};

int main() {
    int choice;
    enum Traffic light;

    printf("Enter Traffic Light:\n");
    printf("0 = RED\n");
    printf("1 = YELLOW\n");
    printf("2 = GREEN\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    light = choice;  
    if (light == RED) {
        printf("RED: Stop\n");
    }
    else if (light == YELLOW) {
        printf("YELLOW: Wait\n");
    }
    else if (light == GREEN) {
        printf("GREEN: Go\n");
    }
    else {
        printf("Invalid input! Please enter 0, 1, or 2.\n");
    }

    return 0;
}