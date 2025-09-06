//Write a program to print all factors of a given number.

#include<stdio.h>
int main () {
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("the factors of %d are: ",n);
    for(i=1;i<=n;i++) {
        if(n%i==0) {
            printf("%d",i);
            if(i!=n) {
                printf(" ");
            }
        }
    }
    return 0;
}