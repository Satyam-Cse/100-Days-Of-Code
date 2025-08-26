// write a program to input an integer and check weather it is even or odd using if else

#include<stdio.h>
int main() {

    int num;
    printf("enter the integer");
    scanf("%d",&num);

    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return 0;
}