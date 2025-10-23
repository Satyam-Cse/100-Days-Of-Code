// write a program to Check if a string is a palindrome.
#include<stdio.h>
int main() {
    char str[100];
    int i, len = 0, isPalindrome = 1;
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
    // Check for palindrome
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}