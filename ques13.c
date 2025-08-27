//write a program to input a year and check weather it is a leap year or not using conditional statement

#include<stdio.h>
int main() {
int year;

printf("enter the value of the year");
scanf("%d",&year);

// year is a leap if divisible by 4 but not 100 , except 400

if ((year % 400 == 0) || (year % 40 == 0 && year % 100 != 0) ) {
    printf("%d is a leap year/n",year);
} else {
    printf("%d is not a leap year/n",year);
}

return 0;
}
 