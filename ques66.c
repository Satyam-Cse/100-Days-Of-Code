//Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, i, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // keeping extra space for inserting

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 0;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

   
    for (i = n; i >= pos; i--) { // shift element to the right
        arr[i] = arr[i - 1];
    }

    //  Insert element
    arr[pos - 1] = element;
    n++; // size increases

   //  updated array
    printf("Array after insert:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

