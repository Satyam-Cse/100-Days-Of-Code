#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inwords = 0;

    fp = fopen("info.txt", "r");  
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++; 

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inwords = 0;
        } else {
            if (inwords == 0) { 
                words++;
                inwords = 1;
            }
        }
    }

    fclose(fp);

    if (characters > 0 && ch != '\n')
        lines++;

    printf("Total Characters: %d\n", characters);
    printf("Total Words     : %d\n", words);
    printf("Total Lines     : %d\n", lines);

    return 0;
}