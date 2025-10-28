#include <stdio.h>

int main() {
    int n, target;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    // Input sorted array
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target
    printf("Enter target value: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    // Find first occurrence
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    // Find last occurrence (only if found once)
    if (first != -1) {
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] == target) {
                last = i;
                break;
            }
        }
    }

    printf("First and last occurrence indices: %d %d\n", first, last);

    return 0;
}