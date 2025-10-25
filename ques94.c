// write a program to Find the longest word in a sentence.
#include<stdio.h>
int main() {
    char str[200];
    int i, maxLength = 0, currentLength = 0, startIndex = 0, maxStartIndex = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through each character until null terminator
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check for space or newline to identify word boundaries
        if(ch == ' ' || ch == '\n') {
            if(currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIndex = startIndex;
            }
            currentLength = 0;
            startIndex = i + 1; // Update start index for the next word
        } else {
            currentLength++;
        }
    }

    // Check for the last word in the string
    if(currentLength > maxLength) {
        maxLength = currentLength;
        maxStartIndex = startIndex;
    }

    // Print the longest word
    printf("The longest word is: ");
    for(i = maxStartIndex; i < maxStartIndex + maxLength; i++) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
