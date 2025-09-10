//Write a program to swap the first and last digit of a number.

#include<stdio.h>
#include<math.h>
int main () {
    int n,rem,rev=0,dig,first,last,temp;
    printf("enter a number: ");
    scanf("%d",&n);
    dig=0;
    temp=n;
    while(temp!=0) {
        dig++;
        temp=temp/10;
    }
    first=n/(pow (10,dig-1));
    last=n%10;
    n=n-last;
    n=n+first;
    n=n-(first*pow(10,dig-1));
    n=n+(last*pow(10,dig-1));
    printf("the number after swapping first and last digit is: %d",n);
    return 0;
}