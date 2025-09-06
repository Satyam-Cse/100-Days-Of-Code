//Write a program to check if a number is an Armstrong number.

#include<stdio.h>
#include<math.h>

int main () {
    int n,original,sum=0,remainder,digits=0;
    printf("enter a number: ");
    scanf("%d",&n);
    original = n;


    while(original != 0) {
        digits++;
        original /= 10;

    }
    original = n;
    while(original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }
    if (sum == n) {
        printf("the number is an Armstrong number");
    } else {
        printf("the number is not an Armstrong number");

    }
    return 0;
}