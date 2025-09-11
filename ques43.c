//Write a program to check if a number is a strong number.

#include<stdio.h>
int main () {
    int n,i,sum=0,temp,fact;
    printf("enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0) {
        fact=1;
        i=temp%10;
        for(int j=1;j<=i;j++)  {
            fact=fact*j;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n)
    printf("the number is a strong number");
    else
    printf("the number is not a strong number");
    return 0;
}