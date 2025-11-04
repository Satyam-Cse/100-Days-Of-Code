//Write a program to take a string input. Change it to sentence case.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert to sentence case
    int len = strlen(str);
    int new_sentence = 1; // Flag to indicate start of a new sentence

    for(int i = 0; i < len; i++) {
        if(new_sentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            new_sentence = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        // Check for sentence-ending punctuation
        if(str[i] == '.' || str[i] == '!' || str[i] == '?') {
            new_sentence = 1;
        }
    }

    printf("String in sentence case: %s", str);
    return 0;
}