// Return a structure containing top student's details from a function.

#include <stdio.h>

// Structure to store student details
struct Student {
    int id;
    char name[50];
    float marks;
};

struct Student findTopStudent(struct Student s1, struct Student s2, struct Student s3) {
    struct Student top = s1;   

    if (s2.marks > top.marks) {
        top = s2;   
    }
    
    if (s3.marks > top.marks) {
        top = s3;   
    }

    return top;    
}

int main() {
    struct Student s1, s2, s3, topper;

    printf("details of Student 1: ");
    scanf("%d %s %f", &s1.id, s1.name, &s1.marks);

    printf("details of Student 2: ");
    scanf("%d %s %f", &s2.id, s2.name, &s2.marks);

    printf("details of Student 3: ");
    scanf("%d %s %f", &s3.id, s3.name, &s3.marks);

    topper = findTopStudent(s1, s2, s3);

    printf("ID    : %d\n", topper.id);
    printf("Name  : %s\n", topper.name);
    printf("Marks : %.2f\n", topper.marks);

    return 0;
}