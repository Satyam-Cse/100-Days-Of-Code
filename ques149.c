// Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    struct Date join;
};

int main() {
    struct Employee *emp;

    emp = (struct Employee *) malloc(sizeof(struct Employee));

    if (emp == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    /* taking input */
    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);

    printf("Enter Employee Name: ");
    scanf("%s", emp->name);   
    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp->join.day, &emp->join.month, &emp->join.year);

    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", emp->id);
    printf("Name: %s\n", emp->name);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp->join.day, emp->join.month, emp->join.year);

    free(emp);

    return 0;
}