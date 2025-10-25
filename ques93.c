// write a program to Check if two strings are anagrams of each other.
#include<stdio.h>
int main() {
    char str1[100], str2[100];
    int count1[256] = {0}; // Frequency array for first string
    int count2[256] = {0}; // Frequency array for second string
    int i;

    printf("enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of each character in the first string
    for(i = 0; str1[i] != '\0'; i++) {
        char ch = str1[i];
        if(ch != '\n') { // Ignore newline character
            count1[(unsigned char)ch]++;
        }
    }

    // Count frequency of each character in the second string
    for(i = 0; str2[i] != '\0'; i++) {
        char ch = str2[i];
        if(ch != '\n') { // Ignore newline character
            count2[(unsigned char)ch]++;
        }
    }

    // Compare frequency arrays
    for(i = 0; i < 256; i++) {
        if(count1[i] != count2[i]) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}

