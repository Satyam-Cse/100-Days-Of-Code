// Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks;
};

int main() {

    struct Student s;         
    struct Student *ptr;      

    ptr = &s;                 

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll);

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Marks: ");
    scanf("%d", &ptr->marks);

    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %d\n", ptr->marks);

    return 0;
}