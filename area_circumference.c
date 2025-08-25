/*Q4 (User Inputs, Operations & Output)
📋
Write a program to calculate the area and circumference of a circle given its radius.*/




#include<stdio.h>
int main(){
    float radius,circumference,area;

    printf("enter the value of radius os circle");

    scanf("%f",&radius);

    circumference = 2*3.14*radius;

    area = 3.14*radius*radius;

    printf("the circumference of the circle is %F",circumference);

printf("\n the area of the circle is %f",area);

return 0;
}