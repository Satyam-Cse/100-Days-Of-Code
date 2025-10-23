// write a c program to Replace spaces with hyphens in a string.
#include<stdio.h>
int main() {
    char str[100];
    int i;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Iterate through each character until null terminator
    for(i = 0; str[i] != '\0'; i++) {
        // Check for space character
        if(str[i] == ' ') {
            str[i] = '-'; // Replace space with hyphen
        }
    }
    printf("modified string: %s", str);
    return 0;
}
    

