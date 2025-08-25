/*Q9 (User Inputs, Operations & Output)
📋
Write a program to calculate simple and compound interest for given princi*/

#include<stdio.h>
#include<math.h>

int main() {
    float principal,rate,time,simple_interest,compound_interest;

    //input
    printf("enter the principal amount");
    scanf("%f",&principal);
    printf("enter the rate of interest");
    scanf("%f",&rate);
    printf("enter time in years");
    scanf("%f",&time);

    //simple interest
    simple_interest = (principal * rate * time) / 100;

    //compound interest
    compound_interest = principal * pow((1 + rate / 100), time ) - principal;

    //output
    printf("simple interest: %.2f\n", simple_interest);
    printf("compound interest: %.2f\n", compound_interest);

    return 0;
}



