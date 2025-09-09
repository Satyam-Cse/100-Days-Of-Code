//Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
int main () {
    long long n,rem,rev=0;
    printf("enter a binary number: ");
    scanf("%lld",&n);
    while(n!=0) {
        rem=n%10;
        if(rem==0)
        rev=rev*10+1;
        else if(rem==1)
        rev=rev*10+0;
        else {
            printf("invalid binary number");
            return 0;
        }
        n=n/10;
    }
    n=0;
    while(rev!=0) {
        rem=rev%10;
        n=n*10+rem;
        rev=rev/10;
    }
    printf("the 1's complement is: %lld",n);
    return 0;
}
    
