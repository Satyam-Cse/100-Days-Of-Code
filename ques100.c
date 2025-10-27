// write a program to Print all sub-strings of a string.
#include<stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("All substrings of the given string are:\n");
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        for (int j = i; str[j] != '\0' && str[j] != '\n'; j++) {
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }
    return 0;
}