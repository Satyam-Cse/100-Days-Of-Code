#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);  // Reads input string without spaces

    int n = strlen(s);
    int lastIndex[256]; // To store last index of each character (ASCII)
    
    // Initialize all to -1
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0;  // Result
    int start = 0;   // Starting index of current window

    for (int i = 0; i < n; i++) {
        // If the character was seen before, update start position
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        // Update the last seen index of current character
        lastIndex[(unsigned char)s[i]] = i;

        // Update max length if needed
        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLen);
    return 0;
}