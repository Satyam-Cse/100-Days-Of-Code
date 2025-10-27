// write a program to Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include<stdio.h>
int main() {
    char date[11];
    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    // Check if the input format is correct
    if (date[2] != '/' || date[5] != '/') {
        printf("Invalid date format.\n");
        return 1;
    }

    // Replace '08' with 'Aug'
    date[3] = 'A';
    date[4] = 'u';
    date[5] = 'g';

    printf("Date in dd-Apr-yyyy format: %s", date);
    return 0;
}