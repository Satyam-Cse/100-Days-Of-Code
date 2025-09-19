//Count even and odd numbers in an array.

#include<stdio.h>
int main () {
    int n,i;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements: ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int evencount = 0 , oddcount = 0;
    for(i=0;i<n;i++) {
        if(arr[i]%2 == 0)
        evencount++;
        else
        oddcount++;
    }
    printf("even=%d , odd=%d\n", evencount,oddcount);
    return 0;
}