#include <stdio.h>

int main() {
    int n;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_sum = arr[0];   // Initialize with first element
    int current_sum = arr[0];

    // Apply Kadane's Algorithm
    for (int i = 1; i < n; i++) {
        if (current_sum + arr[i] > arr[i])
            current_sum = current_sum + arr[i];
        else
            current_sum = arr[i];

        if (current_sum > max_sum)
            max_sum = current_sum;
    }

    printf("Maximum Subarray Sum: %d\n", max_sum);
    return 0;
}