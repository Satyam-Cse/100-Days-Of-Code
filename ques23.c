//Write a program to calculate a library fine based on late days.

#include<stdio.h>
int main () {
    int days_late;
    float fine;
    printf("enter the number of days late");
    scanf("%d",&days_late);

    if ( days_late <= 0) {
        fine = 0;
    } else if (days_late <= 5) {
        fine = days_late * 2.0;
    } else if (days_late <= 10) {
        fine = days_late * 4.0;
    } else if (days_late <= 15) {
        fine = days_late * 6.0;
    } else if (days_late <= 20) {
        fine = days_late * 8.0;
    } else if (days_late <= 25) {
        fine = days_late * 10.0;
    } else if (days_late <= 30) {
        fine = days_late * 12.0;
    } else {
        printf("membership cancelled\n");
    return 0;
    }
    printf("fine: %.2f\n",fine);
    return 0;
}


