#include <stdio.h>

int main() {
    int n, k;

    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Taking window size
    printf("Enter window size k: ");
    scanf("%d", &k);

    // Finding maximum for each subarray of size k
    printf("Maximum elements of each subarray of size %d are:\n", k);

    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}