//Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Binary Search
    int low = 0;          // starting position
    int high = n - 1;     // last position
    int found = -1;       // will store position if found

    while (low <= high) {
        int mid = (low + high) / 2;  // middle position

        if (arr[mid] == key) {
            found = mid;  // element found
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;   // search right half
        }
        else {
            high = mid - 1;  // search left half
        }
    }

    if (found != -1)
        printf("Element %d found at position %d\n", key, found);
    else
        printf("Element %d not found\n", key);

    return 0;
}
