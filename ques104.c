#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2; // Sum of numbers from 1 to n
    int leftSum = 0;

    for (int x = 1; x <= n; x++) {
        leftSum += x;  // Sum from 1 to x
        int rightSum = totalSum - leftSum + x; // Sum from x to n

        if (leftSum == rightSum) {
            printf("Pivot integer is: %d\n", x);
            return 0;
        }
    }

    printf("-1\n"); // If no pivot found
    return 0;
}