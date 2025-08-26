// wrie a program to input integer and check weather it is positive , negative or zero using if-else

#include<stdio.h>
int main() {

    int num;
    printf("enter the value of integer");
    scanf("%d",&num);

    if (num > 0) {
        printf("%d is positive\n", num);
    } else if (num < 0) {
        printf("%d is negative\n", num);
    } else if (num == 0) {
        printf("%d is zero\n", num);
    }

    return 0;
}