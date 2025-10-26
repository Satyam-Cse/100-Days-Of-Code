// write a program to Reverse each word in a sentence without changing the word order.
#include<stdio.h>
#include<stdio.h>
int main() {
    char str[100], temp[100];
    int i, j, start, end;
    printf("enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    i = 0;
    while (str[i] != '\0') {
        // Skip spaces to find the start of a word
        while (str[i] == ' ' && str[i] != '\0') {
            i++;
        }
        start = i;
        // Find the end of the word
        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }
        end = i - 1;
        // Reverse the word in place
        j = 0;
        while (start < end) {
            char ch = str[start];
            str[start] = str[end];
            str[end] = ch;
            start++;
            end--;
        }
    }
    printf("sentence with reversed words: %s", str);
    return 0;
}