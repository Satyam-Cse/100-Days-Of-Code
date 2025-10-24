// write a program to Remove all vowels from a string
#include<stdio.h>
int main() {
    char str[100], result[100];
    int i, j = 0;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Iterate through each character until null terminator
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if the character is not a vowel
        if(!(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
             ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            result[j++] = ch; // Add non-vowel character to result
        }
    }
    result[j] = '\0'; // Null-terminate the result string
    printf("string after removing vowels: %s", result);
    return 0;
}
    