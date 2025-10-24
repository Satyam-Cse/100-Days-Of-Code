// write a program to Count frequency of a given character in a string.
#include<stdio.h>
int main() {
    char str[100], ch;
    int i, count = 0;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("enter the character to count its frequency: ");
    scanf("%c", &ch);
    // Iterate through each character until null terminator
    for(i = 0; str[i] != '\0'; i++) {
        // Check if the current character matches the given character
        if(str[i] == ch) {
            count++;
        }
    }
    printf("frequency of '%c' in the string: %d\n", ch, count);
    return 0;
}
    