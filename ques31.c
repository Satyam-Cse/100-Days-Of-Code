//Write a program to take a number as input and print its equivalent binary representation.

#include<stdio.h>
int main () {
    int n,i;
    int binary[32];
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;n>0;i++) {
        binary[i] = n % 2;
        n = n / 2;
    }
    printf("the binary representation is ");
    for(i=i-1;i>=0;i--) {
        printf("%d",binary[i]);
    }
    return 0;
}