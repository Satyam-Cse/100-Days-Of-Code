//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side length

#include<stdio.h>
int main () {
    float a,b,c;
    printf("enter side a");
    scanf("%f",&a);
    printf("enter side b");
    scanf("%f",&b);
    printf("enter side c");
    scanf("%f",&c);
    if ( a== b && b == c) {
        printf("equilateral traingle");
    } else if ( a == b || b == c || a == c) {
        printf("isosceles traingle");
    } else {
        printf("scalene traingle");
    }
return 0;
}
    

