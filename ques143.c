// Find and print the student with the highest marks.

#include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct student s[5];
    int i, highmarks = 0;   
    printf("Enter details of 5 students:\n");

    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("SAP ID: ");
        scanf("%d", &s[i].roll);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[highmarks].marks) {
            highmarks = i;
        }
    }
    printf("\nStudent with highest marks:\n");
    printf("Roll: %d\n", s[highmarks].roll);
    printf("Name: %s\n", s[highmarks].name);
    printf("Marks: %.2f\n", s[highmarks].marks);

    return 0;
}