//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include<stdio.h>
int main () {
    int n,i;
    float sum=0.0;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        sum=sum+(float)(2*i)/(4*i-1);
    }
    printf("the sum of the series is: %.3f",sum);
    return 0;
}