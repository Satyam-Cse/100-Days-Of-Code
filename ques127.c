#include <stdio.h>

int main() {
    FILE *inp, *out;
    char ch;

    inp = fopen("info.txt", "r");
    if (inp == NULL) {
        printf("notable to open input.txt\n");
        return 1;
    }

    out = fopen("test.txt", "w");
    if (out == NULL) {
        printf("notable to create output.txt\n");
        fclose(inp);
        return 1;
    }

    while ((ch = fgetc(inp)) != EOF) {

        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;   
        }

        fputc(ch, out);
    }

    printf("open test.txt\n");

    fclose(inp);
    fclose(out);

    return 0;
}