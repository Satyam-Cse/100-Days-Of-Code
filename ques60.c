//Count positive, negative, and zero elements in an array.

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
    int positivecount = 0 , negitivecount = 0,zerocount=0;
    for(i=0;i<n;i++) {
        if(arr[i] < 0)
      negitivecount++;
        else if(arr[i] > 0)
       positivecount++;
       else if(arr[i] == 0)
       zerocount++;
    }
    printf("negitivecount=%d , positivecount=%d, zerocount=%d\n", negitivecount,positivecount,zerocount);
    return 0;
}