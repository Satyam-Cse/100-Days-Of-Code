//Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // declare array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element %d found at position %d\n", key, i + 1); 
            found = 1;
            break; // stop after finding first occurrence
        }
    }

    if(found == 0) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}