//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    // Open file in write mode
    file = fopen("info.txt", "w");

    if (file == NULL) {
        printf("Error! Could not create file.\n");
        return 1; // Exit program if file not created
    }

    // Take user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // safer than gets()
    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to file
    fprintf(file, "Name: %sAge: %d\n", name, age);

    // Close the file
    fclose(file);

    printf("Data successfully saved to info.txt\n");

    return 0;
}