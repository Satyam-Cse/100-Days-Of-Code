#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    int sum = 0;
    int count = 0;
    float avg;

    fp = fopen("numbers.txt", "w");

    if (fp == NULL) {
        printf("Could not open numbers.txt for writing\n");
        return 1;
    }

    fputs("10 20 30 40 50", fp);

    fclose(fp); 

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Could not open numbers.txt for reading\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("integers noot found in the file.\n");
        return 0;
    }

    avg = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}