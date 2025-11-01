#include <stdio.h>

int main() {
    int n, k;

    // Taking input for array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Taking window size
    printf("Enter window size k: ");
    scanf("%d", &k);

    printf("First negative integer in each window of size %d:\n", k);

    // Loop through each subarray (window)
    for (int i = 0; i <= n - k; i++) {
        int found = 0; // flag to check if any negative found

        // Check each element in the window
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        // If no negative number found
        if (!found)
            printf("0 ");
    }

    printf("\n");
    return 0;
}