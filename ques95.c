// write a program to Check if one string is a rotation of another.
#include<stdio.h>
int main() {
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, isRotation = 0;

    printf("enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Calculate lengths of both strings
    for(i = 0; str1[i] != '\0'; i++) {
        len1++;
    }
    for(i = 0; str2[i] != '\0'; i++) {
        len2++;
    }

    // Exclude newline character if present
    if(len1 > 0 && str1[len1 - 1] == '\n') {
        len1--;
    }
    if(len2 > 0 && str2[len2 - 1] == '\n') {
        len2--;
    }

    // Check if lengths are equal
    if(len1 != len2) {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    // Check for rotation
    for(i = 0; i < len1; i++) {
        isRotation = 1; // Assume they are rotations
        for(j = 0; j < len1; j++) {
            if(str1[(i + j) % len1] != str2[j]) {
                isRotation = 0; // Not a rotation
                break;
            }
        }
        if(isRotation) {
            break; // Exit if rotation is found
        }
    }

    if(isRotation) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}