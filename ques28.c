//Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main () {
    int n,i,product=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        if(i%2==0) {
            product= product * i;
        }
    }
    printf("the product of even numbers from 1 to %d is %d",n,product);
    return 0;
}