// write a program to Print each character of a string on a new line.
#include<stdio.h>
int main() {
    char str[100];
    int i;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("charachters in the string are:\n");
    // Print each character until null terminator
    for(i=0;str[i] != '\0';i++) {
        // Skip printing the newline character
        
        if(str[i] != '\n') {
            printf("%c\n", str[i]);
        }
    }
    return 0;
}