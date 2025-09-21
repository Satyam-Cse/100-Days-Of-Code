//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;            // Input number (use long long for large values)
    int digit, count[10] = {0}; // Array to store frequency of digits (0-9)
    int max = 0, result = 0;    // max = highest frequency, result = digit with max frequency

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle negative numbers by converting to positive
    if(num < 0) {
        num = -num;
    }

    // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;     // extract last digit
        count[digit]++;       // increase its frequency
        num /= 10;            // remove last digit
    }

    // Find the digit with maximum frequency
    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("Digit %d occurs most frequently (%d times).\n", result, max);

    return 0;
}

