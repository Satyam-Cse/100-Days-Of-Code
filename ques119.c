//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (only one element will be repeated):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assuming elements are in the range 0 to n-2 (since one repeats)
    int visited[n];  
    for(int i = 0; i < n; i++) {
        visited[i] = 0;  // Initialize visited array
    }

    for(int i = 0; i < n; i++) {
        if(visited[arr[i]] == 1) {
            printf("Repeated element is: %d\n", arr[i]);
            return 0; // Found the duplicate
        }
        visited[arr[i]] = 1;
    }

    printf("No repeated element found.\n");
    return 0;
}