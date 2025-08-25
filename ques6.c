/*Q6 (User Inputs, Operations & Output)
📋
Write a program to swap two numbers using a third variable.*/

#include<stdio.h>
int main() {
    int a,b,temp;
    printf("enter the two integer");
    scanf("%d %d",&a,&b);

    //swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    printf("after swapping: a = %d, b = %d\n", a,b);
    return 0;
}