//Write a program to calculate the factorial of a number.

#include<stdio.h>
int main () {
    int n,i,factorial=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        factorial = factorial * i;
    }
    printf("the factorial of %d is %d",n,factorial);
    return 0;
}

