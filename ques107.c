#include <stdio.h>

int main() {
    int n;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int result[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find Previous Greater Element for each element
    for(int i = 0; i < n; i++) {
        int prevGreater = -1;  // Default value if none found
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;  // Stop after finding the nearest greater element on the left
            }
        }
        result[i] = prevGreater;
    }

    // Print result in comma-separated format
    printf("Previous Greater Elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if(i != n - 1)
            printf(", ");
    }

    return 0;
}