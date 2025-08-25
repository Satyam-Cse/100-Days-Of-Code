/*Q3 (User Inputs, Operations & Output)
📋
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

#include<stdio.h>
int main(){
    int length,breadth,perimeter,area;
    printf("enter the value of length");
    scanf("%d",&length);
    printf("enter the value of breadth");
    scanf("%d",&breadth);
    perimeter = 2*(length+breadth);
    area = length*breadth;
    printf("the perimeter of rectangle is %d",perimeter);
    printf("\n the area of rectangle is %d",area);
    return 0;
}