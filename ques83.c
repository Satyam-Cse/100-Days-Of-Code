// write a program to Count vowels and consonants in a string.
#include<stdio.h>
int main() {
    char str[100];
    int i, vowels =0, consonants =0;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Iterate through each character until null terminator
    for(i=0;str[i] != '\0';i++) {
        char ch = str[i];
        // Check for vowels (both uppercase and lowercase)
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
               ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("number of vpowels: %d\n", vowels);
    printf("number of consonants: %d\n", consonants);
    return 0;
}