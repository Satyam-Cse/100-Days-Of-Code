//Write a program to calculate an electricity bill based on units consumed.

#include<stdio.h>
int main () {
    int units;
    float bill_amount;
    printf("enter the number of unit consumed");
    scanf("%d",&units);

    if (units <= 100) {
        bill_amount = units * 5;
    } else if (units <= 200) {
        bill_amount = units * 6.3;
    } else if (units <= 300) {
        bill_amount = units * 8.8;
    } else {
        bill_amount = units * 10;
    }
    printf("bill amount: %.2f\n",bill_amount);
    return 0;
} 
    

