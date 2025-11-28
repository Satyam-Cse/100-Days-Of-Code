// Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender {
    MALE = 1,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int choice;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Select Gender:\n");
    printf("1 = MALE\n");
    printf("2 = FEMALE\n");
    printf("3 = OTHER\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    p.gender = choice;

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);

    if (p.gender == MALE) {
        printf("Gender: Male\n");
    }
    else if (p.gender == FEMALE) {
        printf("Gender: Female\n");
    }
    else if (p.gender == OTHER) {
        printf("Gender: Other\n");
    }

    return 0;
}