#include <stdio.h>

int main() {
    int n, x;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input x
    printf("Enter the value of x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int ceilIndex = -1;

    // Binary search for ceil
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid;    // possible ceil found
            high = mid - 1;     // search in left half for smaller one
        } else {
            low = mid + 1;      // move to right half
        }
    }

    // Output
    if (ceilIndex != -1)
        printf("Ceil of %d is %d at index %d\n", x, arr[ceilIndex], ceilIndex);
    else
        printf("-1\n");

    return 0;
}