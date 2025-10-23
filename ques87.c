// write a program to Count spaces, digits, and special characters in a string.
#include<stdio.h>
int main() {
    char str[100];
    int i, spaces = 0, digits = 0, specialChars = 0;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Iterate through each character until null terminator
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check for space
        if(ch == ' ') {
            spaces++;
        }
        // Check for digits
        else if(ch >= '0' && ch <= '9') {
            digits++;
        }
        // Check for special characters (not alphanumeric and not space)
        else if((ch < 'A' || (ch > 'Z' && ch < 'a') || ch > 'z') && (ch < '0' || ch > ' 9')) {
            specialChars++;
        }
    }
    printf("number of spaces: %d\n", spaces);
    printf("number of digits: %d\n", digits);
    printf("number of special characters: %d\n", specialChars);
    return 0;
}