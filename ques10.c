/*Q10 (User Inputs, Operations & Output)
📋
Write a program to input time in seconds and convert it to hours:minutes*/

#include<stdio.h>

int main() {
    int total_seconds,hours,minutes,seconds;

    //input
    printf("enter time in seconds");
    scanf("%d",&total_seconds);

    //conversion
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    //output
    printf("time in hour:minutes:seconds formate is %d:%d:%d\n", hours,minutes,seconds);

    return 0;
}