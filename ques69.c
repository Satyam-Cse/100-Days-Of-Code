//Rotate an array to the right by k positions.
#include<stdio.h>
int main() {
    int n,k,i;
    printf("enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("enter %d elements: ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("enter number of position to rotate: ");
    scanf("%d",&k);
     k = k % n; // if k>n
     int temp[k]; // temporary arry to store last k elements

     // store last k elements in temp
     for(i=0;i<k;i++) {
        temp[i] = arr[n-k+i];
     }
     // shift rest of the elements to the right
     for(i=n-1;i>=k;i--) {
        arr[i] = arr[i-k];
     }
     // copy k elements from temp to arr
     for(i=0;i<k;i++) {
        arr[i] = temp[i];
     }
     // rotated arry
     printf("arry after rotating:\n");
     for(i=0;i<n;i++) {
        printf("%d",arr[i]);
     }
     printf("\n");
     return 0;
    }
