// Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[40];
    struct Date joinDate;   
};

int main() {

    struct Employee emp, readEmp;
    FILE *filePointer;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf(" %39s", emp.name);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joinDate.day,
                      &emp.joinDate.month,
                      &emp.joinDate.year);

    filePointer = fopen("employee.bin", "wb");
    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fwrite(&emp, sizeof(emp), 1, filePointer);

    fclose(filePointer);

    printf("\nData has been saved to employee.bin\n");

    filePointer = fopen("employee.bin", "rb");
    if (filePointer == NULL) {
        printf("Error reading file.\n");
        return 1;
    }

    fread(&readEmp, sizeof(readEmp), 1, filePointer);

    fclose(filePointer);

    printf("\n--- Employee Details From File ---\n");
    printf("Employee ID: %d\n", readEmp.id);
    printf("Employee Name: %s\n", readEmp.name);
    printf("Joining Date: %02d-%02d-%04d\n",
           readEmp.joinDate.day,
           readEmp.joinDate.month,
           readEmp.joinDate.year);

    return 0;
}