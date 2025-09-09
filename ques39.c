//Write a program to find the product of odd digits of a number.

#include<stdio.h>
int main () {
    int n,prod=1,rem,flag=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n!=0) {
        rem=n%10;
        if(rem%2!=0) {
            prod=prod*rem;
            flag=1;
        }
        n=n/10;
    }
    if(flag)
    printf("the product of odd digits is: %d",prod);
    else
    printf("there are no odd digits in the number");
    return 0;
}