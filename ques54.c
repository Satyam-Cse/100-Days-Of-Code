/* Write a program to print the following pattern:

*

***

*****
*******
***

*
*/

#include <stdio.h>

int main() {
    int i, j,n=1;
         
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
        n = n + 2;   
    }

    
    n = 3;
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
        n = n-2;   
    }

    return 0;
}
