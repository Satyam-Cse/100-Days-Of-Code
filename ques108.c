//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include<stdio.h>
int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result[n];
    for(int i=0;i<n;i++) {
        int product = 1;
        for(int j=0;j<n;j++) {
            if(i != j) {
                product *= arr[j];
            }
        }
        result[i] = product;
    }
    printf("Product Array: ");
    for(int i=0;i<n;i++) {
        printf("%d",result[i]);
        if(i != n-1)
            printf(", ");
    }
    printf("\n");
    return 0;
}

