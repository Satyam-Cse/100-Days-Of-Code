//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include<stdio.h>
int main() {
    int n, k;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the size of subarray k: ");
    scanf("%d", &k);
    int maxsum = 0;
    // Calculate sum of first k elements
    for(int i=0; i<k; i++) {
        maxsum += arr[i];
    }
    int currsum = maxsum;
    // Slide the window from start to end of the array
    for(int i=k; i<n; i++) {
        currsum += arr[i] - arr[i-k];
        if(currsum > maxsum) {
            maxsum = currsum;
        }
    }
    printf("Maximum sum of the subarray of size %d is: %d\n", k,maxsum);
    return 0;
}