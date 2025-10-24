// write a program to Toggle case of each character in a string.
#include<stdio.h>
int main() {
    char str[100];
    int i;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Iterate through each character until null terminator
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if the character is lowercase
        if(ch >= 'a' && ch <= 'z') {
            // Convert to uppercase by subtracting 32 from ASCII value
            str[i] = ch - 32;
        }
        // Check if the character is uppercase
        else if(ch >= 'A' && ch <= 'Z') {
            // Convert to lowercase by adding 32 to ASCII value
            str[i] = ch + 32;
        }
    }
    printf("toggled case string: %s", str);
    return 0;
}
    