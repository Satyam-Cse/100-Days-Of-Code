// write a program to Reverse a string.
#include<stdio.h>
int main() {
    char str[100], reversed[100];
    int i, len = 0;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Calculate the length of the string
    for(i = 0; str[i] != '\0'; i++) {
        len++;
    }
    // Exclude the newline character if present
    if(len > 0 && str[len - 1] == '\n') {
        len--;
    }
    // Reverse the string
    for(i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0'; // Null-terminate the reversed string
    printf("reversed string: %s\n", reversed);
    return 0;
}