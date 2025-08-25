/*1 (User Inputs, Operations & Output)
📋
Write a program to input two numbers and display their sum.*/



#include <stdio.h> 
int main(){
    int a,b,c;
    printf("enter the value of first number");
    scanf("%d",&a);
    printf("enter the value of second number");
    scanf("%d",&b);
    c = a+b;
    printf("the sum of two number is %d",c);
    return 0;
}