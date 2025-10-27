// write a program to Print initials of a name with the surname displayed in full.
#include<stdio.h>
int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    char initials[10] = "";
    char surname[50] = "";
    int i = 0, j = 0;

    // Extract initials and surname
    while (name[i] != '\0') {
        // If it's the first character or the character after a space
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' ')) {
            // If it's not the last word, add to initials
            if (name[i + 1] != '\0' && name[i + 1] != ' ') {
                initials[j++] = name[i];
                initials[j++] = '.';
            } else {
                // It's the start of the surname
                while (name[i] != '\0' && name[i] != '\n') {
                    surname[j - (j > 0 ? 2 : 0)] = name[i];
                    j++;
                    i++;
                }
                break;
            }
        }
        i++;
    }
    initials[j] = '\0';
    surname[j - (j > 0 ? 2 : 0)] = '\0';

    printf("Initials and Surname: %s %s\n", initials, surname);
    return 0;
}
    