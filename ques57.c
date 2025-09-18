//Find the sum of array elements.

#include<stdio.h>
int main () {
 int arr[5] = {10,20,30,40,50},n,count=0;
    printf("enter number of elements: ");
    scanf("%d",&n);
    if(n<1 || n>5) {
      printf("invalid input");
      return 1;
    }
    for(int i=0;i<=n-1;i++) {
      count = count + arr[i];
    }
printf("sum of first %d elements = %d\n",n,count);
     return 0;
} 