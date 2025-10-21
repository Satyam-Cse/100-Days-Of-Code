// write a program to Count characters in a string without using built-in length functions.
#include<stdio.h>
int main() {
    char str[100];
    int count = 0,i;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Count characters until null terminator
    for(i=0; str[i] != '\0'; i++) {
        count++;
    }
    // Subtract 1 to exclude the newline character added by fgets
    if(count > 0 && str[count - 1] == '\n') {
        count--;
    }
    printf("number of characters in the string: %d\n", count);
    return 0;
}