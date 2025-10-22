// write a program to Convert a lowercase string to uppercase without using built-in functions.
#include<stdio.h>
int main() {
    char str[100];
    int i;
    printf("enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);
    // Iterate through each character until null terminator
    for(i=0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if the character is a lowercase letter
        if(ch >= 'a' && ch <= 'z') {
            // Convert to uppercase by subtracting 32 from ASCII value
            str[i] = ch - 32;
        }
    }
    printf("uppercase string: %s", str);
    return 0;
}