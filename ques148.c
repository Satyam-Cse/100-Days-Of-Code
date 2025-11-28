// Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[40];
    int age;
};

int main() {
    struct Employee e1, e2;

    printf("Enter details of Employee 1:\n");
    printf("ID: ");
    scanf("%d", &e1.id);

    printf("Name: ");
    scanf(" %d", e1.name);

    printf("Age: ");
    scanf("%d", &e1.age);

    printf("\nEnter details of Employee 2:\n");
    printf("ID: ");
    scanf("%d", &e2.id);

    printf("Name: ");
    scanf(" %d", e2.name);

    printf("Age: ");
    scanf("%d", &e2.age);

    if (e1.id == e2.id &&
        e1.age == e2.age &&
        strcmp(e1.name, e2.name) == 0)
    {
        printf("structures are IDENTICAL.\n");
    }
    else {
        printf("structures are DIFFERENT.\n");
    }

    return 0;
}