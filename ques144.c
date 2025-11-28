//  Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

// This structure holds information about a student.
// Think of it like a small box that stores different details together.
struct Student {
    int id;
    char name[50];
    float marks;
};

void printStudent(struct Student s) {
    printf("STUDENT DETAILS\n");

    printf("Student ID     : %d\n", s.id);
    printf("Student Name   : %s\n", s.name);
    printf("Marks Scored   : %.2f\n", s.marks);

}

int main() {

    struct Student s1;

    printf("Enter Student ID: ");
    scanf("%d", &s1.id);

    printf("Enter Student Name: ");
    scanf("%s", s1.name);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    printStudent(s1);

    return 0;
}