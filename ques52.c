/* Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
 
*/

#include<stdio.h>
int main () {
    int pattern[] = {1,3,5,3,1};
    int block = 5;
    for(int i=0;i< block;i++) {
        for(int j=0; j< pattern[i];j++) {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}