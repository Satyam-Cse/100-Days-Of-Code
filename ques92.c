// write a program to Find the first repeating lowercase alphabet in a string.
#include<stdio.h>
int main() {
    char str[100];
    int i, j;
    int found = 0; // Flag to indicate if a repeating character is found
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Iterate through each character until null terminator
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if the character is a lowercase alphabet
        if(ch >= 'a' && ch <= 'z') {
            // Check for repetition in the remaining string
            for(j = i + 1; str[j] != '\0'; j++) {
                if(str[j] == ch) {
                    printf("first repeating lowercase alphabet: %c\n", ch);
                    found = 1; // Set flag to indicate a repeating character is found
                    break;
                }
            }
        }
        if(found) {
            break; // Exit outer loop if a repeating character has been found
        }
    }
    if(!found) {
        printf("no repeating lowercase alphabet found.\n");
    }
    return 0;
}
    